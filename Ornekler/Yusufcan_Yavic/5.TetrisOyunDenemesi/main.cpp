#include <iomanip>
#include <iostream>
#include <vector>       //hareket ettirme kütüphanesi
#include <random>       //random sayı blok oluşturmak için gerekli kütüphane
#include <conio.h>

using namespace std;

struct Random
{
    Random(int min, int max)
            : mUniformDistribution(min, max)
    {}

    int operator()()
    {
        return mUniformDistribution(mEngine);
    }

    default_random_engine mEngine{ random_device()() };
    uniform_int_distribution<int> mUniformDistribution;
};


// varsayılan blok oluşturma

vector<vector<int>> stage(22, vector<int>(13, 0));
vector<vector<int>> block =
        {
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 },
                { 0, 0, 0, 0 }
        };

vector<vector<int>> field(22, vector<int>(13, 0));

// koordinate sistemi

int y = 0;
int x = 4;
bool gameover = false;
size_t GAMESPEED = 20000;

Random getRandom{ 0, 6 };

vector<vector<vector<int>>> block_list =
        {
                {
                    // cubuk blogu
                        { 0, 1, 0, 0 },
                        { 0, 1, 0, 0 },
                        { 0, 1, 0, 0 },
                        { 0, 1, 0, 0 }
                },
                {
                    //L blogu
                        { 0, 0, 0, 0 },
                        { 0, 1, 1, 0 },
                        { 0, 1, 0, 0 },
                        { 0, 1, 0, 0 }
                },
                {
                    //Z blogu
                        { 0, 0, 1, 0 },
                        { 0, 1, 1, 0 },
                        { 0, 1, 0, 0 },
                        { 0, 0, 0, 0 }
                },
                {
                    //ters Z blogu
                        { 0, 1, 0, 0 },
                        { 0, 1, 1, 0 },
                        { 0, 0, 1, 0 },
                        { 0, 0, 0, 0 }
                },
                {
                    // tetris blog
                        { 0, 0, 0, 0 },
                        { 0, 1, 0, 0 },
                        { 1, 1, 1, 0 },
                        { 0, 0, 0, 0 }
                },
                {
                    //kareblog
                        { 0, 0, 0, 0 },
                        { 0, 1, 1, 0 },
                        { 0, 1, 1, 0 },
                        { 0, 0, 0, 0 }
                },
                {
                    //ters L blogu
                        { 0, 0, 0, 0 },
                        { 0, 1, 1, 0 },
                        { 0, 0, 1, 0 },
                        { 0, 0, 1, 0 }
                }
        };

//oyunda kullanılan fonksiyonların tanımlamaları

int menu();
int gameOver();
void title();
void gameLoop();
void display();
bool makeBlocks();
void initGame();
void moveBlock(int, int);
void collidable();
bool isCollide(int, int);
void userInput();
bool rotateBolck();
void spwanBlock();

int main()
{
    switch (menu())
    {
        case 1:
            gameLoop();
            break;
        case 2:
            return 0;
        case 0:
            cerr << "1 yada 2 Seciniz" << endl;
            return -1;
    }
    return 0;
}

int gameOver()
{

    char a;
    cout << " #####    ######   ###   #\n";
    cout << "#     #   #    #   # #   #\n";
    cout << "#         #    #   # #   #\n";
    cout << " #####    #    #   #  #  #\n";
    cout << "      #   #    #   #  #  #\n";
    cout << "      #   #    #   #   # #\n";
    cout << " #####    ######   #   ###\n";
    cout << "\n\nHerhangi bir Tusa veya Enter a basin\n";
    cin >> a;
    return 0;
}

void gameLoop()//oyun dongu fonksiyonu
{
    size_t time = 0;
    initGame();

    while (!gameover)
    {
        if (kbhit())
        {
            userInput();
        }

        if (time < GAMESPEED)
        {
            time++;
        }
        else
        {
            spwanBlock();
            time = 0;
        }
    }

}

int menu()//menu switch case yapısı
{
    title();

    int select_num = 0;

    cin >> select_num;

    switch (select_num)
    {
        case 1:
        case 2:
        case 3:
            break;
        default:
            select_num = 0;
            break;
    }

    return select_num;
}

void title()
{

    system("cls");

    cout << "#==============================================#\n";

    cout << "####### ####### ####### ######    ###    ##### \n";
    cout << "   #    #          #    #     #    #    #     #\n";
    cout << "   #    #          #    #     #    #    #      \n";
    cout << "   #    #####      #    ######     #     ##### \n";
    cout << "   #    #          #    #   #      #          #\n";
    cout << "   #    #          #    #    #     #    #     #\n";
    cout << "   #    #######    #    #     #   ###    ##### \n";
    cout << "\n\n\n\n";

    cout << "\t## MENU ##\n";
    cout << "\t1: OYUNA BASLA\n\t2: CIK\n\n";

    cout << "#=============================================#\n";
    cout << "SECIM YAPINIZ: >> ";
}

void display()//oyun kulvarı ve ekranı temizleme
{
    system("cls");

    for (size_t i = 0; i < 21; i++)
    {
        for (size_t j = 0; j < 12; j++)
        {
            switch (field[i][j])
            {
                case 0:
                    cout << "  " << flush;
                    break;
                case 9:
                    cout << "II" << flush;
                    break;
                default:
                    cout << "[]" << flush;
                    break;
            }
        }
       cout << endl;
    }

    cout << "\nA: SOL  S: ASAGI  D: SAG  [Space]:YON";//kontrolleri kullanıcıya belirttiğim yazı

    if (gameover)//oyun bitince calısan ve ekranı temizliyip son yazdıran if blogu
    {
        system("cls");
        gameOver();
    }
}

void initGame()//oyunun govde kodu burda oyun calısıyor fakat satır silme özelliği yok
{
    for (size_t i = 0; i <= 20; i++)
    {
        for (size_t j = 0; j <= 11; j++)
        {
            if ((j == 0) || (j == 11) || (i == 20))
            {
                field[i][j] = stage[i][j] = 9;
            }
            else
            {
                field[i][j] = stage[i][j] = 0;
            }
        }
    }

    makeBlocks();

    display();
}

bool makeBlocks()//blokları random cagırıp oyunda blogu olusturan fonksiyon
{
    x = 4;
    y = 0;

    int blockType = getRandom();

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            block[i][j] = 0;
            block[i][j] = block_list[blockType][i][j];
        }
    }

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            field[i][j + 4] = stage[i][j + 4] + block[i][j];

            if (field[i][j + 4] > 1)
            {
                gameover = true;
                return true;
            }
        }
    }
    return false;
}

void moveBlock(int x2, int y2)
{

    //blok silme - burası calısmıyo sebebini bilmiyom bloklar silinmeyip gameover oluyo
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            field[y + i][x + j] -= block[i][j];
        }
    }
    //Koordinatları sürekli güncelleyen kod
    x = x2;
    y = y2;

    // block deger bilgisi güncelleme arttırma
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            field[y + i][x + j] += block[i][j];
        }
    }

    display();
}

void collidable()
{
    for (size_t i = 0; i<21; i++)
    {
        for (size_t j = 0; j<12; j++)
        {
            stage[i][j] = field[i][j];
        }
    }
}

bool isCollide(int x2, int y2)
{
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (block[i][j] && stage[y2 + i][x2 + j] != 0)
            {
                return true;
            }
        }
    }
    return false;
}

void userInput()    //kontrol fonksiyonu
                    //bu fonksiyonda tanımlanan harfler ve karakterler girilmesi halinde blok hareketleri saglanıyor
{
    char key;

    key = getch();

    switch (key)
    {
        case 'd':
            if (!isCollide(x + 1, y))
            {
                moveBlock(x + 1, y);
            }
            break;
        case 'a':
            if (!isCollide(x - 1, y))
            {
                moveBlock(x - 1, y);
            }
            break;
        case 's':
            if (!isCollide(x, y + 1))
            {
                moveBlock(x, y + 1);
            }
            break;
        case ' ':
            rotateBolck();
    }
}

bool rotateBolck()//blok döndurme fonksiyonu
{
    vector<vector<int>> tmp(4, vector<int>(4, 0));

    for (size_t i = 0; i < 4; i++)

    { //olusan blogu gecici olarak kaydetme

        for (size_t j = 0; j < 4; j++)
        {
            tmp[i][j] = block[i][j];
        }
    }

    for (size_t i = 0; i < 4; i++)
    { //Dondurme dongusu
        for (size_t j = 0; j < 4; j++)
        {
            block[i][j] = tmp[3 - j][i];
        }
    }

    if (isCollide(x, y))
    { // dondurme yapılamadığı durumda gecici blogu ilk konuda getirmek icin suanki duruma esitleme
        for (size_t i = 0; i < 4; i++)
        {
            for (size_t j = 0; j < 4; j++)
            {
                block[i][j] = tmp[i][j];
            }
        }
        return true;
    }

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            field[y + i][x + j] -= tmp[i][j];
            field[y + i][x + j] += block[i][j];
        }
    }

    display();

    return false;
}

void spwanBlock()//blokları cagıran fonksiyon
{
    if (!isCollide(x, y + 1))
    {
        moveBlock(x, y + 1);
    }
    else
    {
        collidable();
        makeBlocks();
        display();
    }
}