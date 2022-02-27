#pragma once
#include <iostream>
#include <stdlib.h>
class gracz
{
public:
    int statek2, statek3, statek4, statek5;
    char wybor;
    int iloscPol = 900;
    int iloscPolStatkow = 0;
    int pole2 = 0;
    int pole3 = 0;
    int pole4 = 0;
    int pole5 = 0;
    static const int granica = 30;
    char tablica[granica][granica];
    char tablicaZakryta[granica][granica];

    int random(int min, int max);
    void DodajStatki();
    void DodawanieAuto(int statek2, int statek3, int statek4, int statek5, char tablica[granica][granica], char tablicaZakryta[granica][granica]);
    void DodawanieReczneStatkow(int statek2, int statek3, int statek4, int statek5, char tablica[granica][granica], char tablicaZakryta[granica][granica]);
    void WypiszTablice(char tablica[granica][granica]);
    void WypiszTabliceZakryta(char tablicaZakryta[granica][granica]);
    void WypelnijTablice(char tablica[granica][granica], char tablicaZakryta[granica][granica]);
    bool WarunkiJY(char tablica[granica][granica], int x, int j, int y);
    bool WarunkiJX(char tablica[granica][granica], int x, int j, int y);
    bool Warunki(char tablica[granica][granica], int x, int y);
};

