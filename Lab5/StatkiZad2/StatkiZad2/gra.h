#pragma once
#include "gracz.h"
#include "Abstrakcja.h"
#include <iostream>
#include <stdlib.h>
class gra :public gracz
{
public:
    void Fazagry(char tablicaG2[granica][granica], char tablicaZakrytaG1[granica][granica], int iloscPolStatkowG2, char tablicaG1[granica][granica], char tablicaZakrytaG2[granica][granica], int iloscPolStatkowG1, int G1statek2, int G1statek3, int G1statek4, int G1statek5, int G2statek2, int G2statek3, int G2statek4, int G2statek5);
    void WarunkinaO(int x, int y, char tablica[granica][granica], char tablicaZakryta[granica][granica]);
    bool CzyZatopiony(int x, int y, char tablica[granica][granica], char tablicaZakryta[granica][granica]);
    void rozgrywka()
	{
        while (true)
        {
            gra fazaGry;
            gracz gracz1;
            gracz gracz2;
            std::cout << "GRA W STATKI!!!!" << std::endl;
            std::cout << "[GRACZ 1] - WYBIERZ STATKI" << std::endl;
            gracz1.DodajStatki();
            gracz1.WypiszTablice(gracz1.tablica);
            std::cout << "[GRACZ 1] - TO JEST ULOZENIE TWOICH STATKOW" << std::endl;
            std::cout << "KLIKNIJ DOWOLNY PRZYCISK ABY KONTYNUOWAC" << std::endl;
            system("pause");
            system("CLS");
            std::cout << "--------------------------------------------------------------" << std::endl;
            std::cout << "[GRACZ 2] - WYBIERZ STATKI" << std::endl;
            gracz2.DodajStatki();
            gracz2.WypiszTablice(gracz2.tablica);
            std::cout << "[GRACZ 2] - TO JEST ULOZENIE TWOICH STATKOW" << std::endl;
            std::cout << "KLIKNIJ DOWOLNY PRZYCISK ABY KONTYNUOWAC" << std::endl;
            system("pause");
            system("CLS");
            std::cout << "FAZA GRY - [GRACZ 1] ZACZYNA - KLIKNIJ DOWOLNY PRZYCISK BY ZACZAC" << std::endl;
            system("pause");
            system("CLS");
            fazaGry.Fazagry(gracz2.tablica, gracz1.tablicaZakryta, gracz2.iloscPolStatkow, gracz1.tablica, gracz2.tablicaZakryta, gracz1.iloscPolStatkow, gracz1.statek2, gracz1.statek3, gracz1.statek4, gracz1.statek5, gracz2.statek2, gracz2.statek3, gracz2.statek4, gracz2.statek5);
            char wyb;
            std::cout << "WCISNIJ [R] ABY ZAGRACZ PONOWNIE LUB [Q] ABY WYJSC Z GRY" << std::endl;
            std::cin >> wyb;
            if (wyb == 'Q' || wyb == 'q')
            {
                system("CLS");
                return;
            }
            else if (wyb == 'R' || wyb == 'r')
            {
                system("CLS");
            }
        }
	}
};


