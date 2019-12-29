//
// Created by GULUM on 29.12.2019.
//
#include "yilbasi.h"
#include <iostream>
using namespace std;

void yilbasi_agaci(){
    int i,j,n;
    cout<<"Yilbasi agacinizin kac satir olacagini giriniz :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=(i*2-1);j++){
            cout<<"*";
        }
        cout<<""<<endl;
    }
}
