//
// Created by Huseyin Yuce on 25.12.2019.
//
#include "Hesapla.h"

Hesapla::Hesapla() : hesap(0) {}
Hesapla::Hesapla(int n) : hesap(n) {}
int Hesapla::getHesap() {
    return hesap*hesap;
}