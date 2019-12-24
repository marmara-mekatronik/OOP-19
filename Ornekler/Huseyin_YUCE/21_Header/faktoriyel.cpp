//
// Created by Huseyin Yuce on 18.12.2019.
//

int faktoriyel (int sayi){
    int iterasyon, faktoriyel=1;
    for (iterasyon=1; iterasyon<=sayi;iterasyon++)
    {
        faktoriyel=faktoriyel*iterasyon;
    }
    return faktoriyel;
}
