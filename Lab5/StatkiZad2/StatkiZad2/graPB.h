#pragma once
#include "Bot.h"
#include "gra.h"
#include "gracz.h"
#include "graBB.h"
class graPB :public Bot
{
public:
	gra funkcja;
	gracz gracz;
    graBB funkcja2;
    void FazaGryPB(char tablicaB[granica][granica], char tablicaZakrytaG[granica][granica], int iloscPolStatkowB, char tablicaG[granica][granica], char tablicaZakrytaB[granica][granica], int iloscPolStatkowG, int Gstatek2, int Gstatek3, int Gstatek4, int Gstatek5, int Bstatek2, int Bstatek3, int Bstatek4, int Bstatek5);
	void rozgrywka()
	{
        while (true)
        {
            graPB fazagryPB;
            Bot bot;
            std::cout << "GRA W STATKI!!!!" << std::endl;
            std::cout << "[GRACZ] - WYBIERA STATKI" << std::endl;
            gracz.DodajStatki();
            gracz.WypiszTablice(gracz.tablica);
            std::cout << "[GRACZ] - TO JEST ULOZENIE JEGO STATKOW" << std::endl;
            std::cout << "KLIKNIJ DOWOLNY PRZYCISK ABY KONTYNUOWAC" << std::endl;
            system("pause");
            system("CLS");
            std::cout << "--------------------------------------------------------------" << std::endl;
            std::cout << "[BOT] - WYBIERA STATKI" << std::endl;
            bot.DodajStatkiBot();
            bot.WypiszTablice(bot.tablica);
            std::cout << "[BOT] - TO JEST ULOZENIE JEGO STATKOW" << std::endl;
            std::cout << "KLIKNIJ DOWOLNY PRZYCISK ABY KONTYNUOWAC" << std::endl;
            system("pause");
            system("CLS");
            std::cout << "FAZA GRY - [GRACZ] ZACZYNA - KLIKNIJ DOWOLNY PRZYCISK BY ZOBACZYC ICH ROZGRYWKE" << std::endl;
            system("pause");
            system("CLS");
            fazagryPB.FazaGryPB(bot.tablica, gracz.tablicaZakryta, bot.iloscPolStatkow, gracz.tablica, bot.tablicaZakryta, gracz.iloscPolStatkow, gracz.statek2, gracz.statek3, gracz.statek4, gracz.statek5, bot.statek2, bot.statek3, bot.statek4, bot.statek5);
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

