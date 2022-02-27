#pragma once
#include "gracz.h"
class Bot :public gracz
{
public:
    int statek2, statek3, statek4, statek5;
    int iloscPol = 900;
    int iloscPolStatkow = 0;
    int pole2 = 0;
    int pole3 = 0;
    int pole4 = 0;
    int pole5 = 0;
    static const int granica = 30;
    char tablica[granica][granica];
    char tablicaZakryta[granica][granica];

    void DodajStatkiBot();
};

