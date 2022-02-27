#pragma once
#include "Bot.h"
#include "gra.h"

class graBB :public Bot
{
public:
    gra funkcja;
    void FazaGryBot(char tablicaB2[granica][granica], char tablicaZakrytaB1[granica][granica], int iloscPolStatkowB2, char tablicaB1[granica][granica], char tablicaZakrytaB2[granica][granica], int iloscPolStatkowB1, int B1statek2, int B1statek3, int B1statek4, int B1statek5, int B2statek2, int B2statek3, int B2statek4, int B2statek5);
    bool Warun(int x, int y, char tablicaB[granica][granica], char tablicaZakrytaB[granica][granica]);
    void rozgrywka()
	{
        while (true)
        {
            graBB fazagryBB;
            Bot bot1;
            Bot bot2;
            std::cout << "GRA W STATKI!!!!" << std::endl;
            std::cout << "[BOT 1] - WYBIERA STATKI" << std::endl;
            bot1.DodajStatkiBot();
            bot1.WypiszTablice(bot1.tablica);
            std::cout << "[BOT 1] - TO JEST ULOZENIE JEGO STATKOW" << std::endl;
            std::cout << "KLIKNIJ DOWOLNY PRZYCISK ABY KONTYNUOWAC" << std::endl;
            system("pause");
            system("CLS");
            std::cout << "--------------------------------------------------------------" << std::endl;
            std::cout << "[BOT 2] - WYBIERA STATKI" << std::endl;
            bot2.DodajStatkiBot();
            bot2.WypiszTablice(bot2.tablica);
            std::cout << "[BOT 2] - TO JEST ULOZENIE JEGO STATKOW" << std::endl;
            std::cout << "KLIKNIJ DOWOLNY PRZYCISK ABY KONTYNUOWAC" << std::endl;
            system("pause");
            system("CLS");
            std::cout << "FAZA GRY - [BOT 1] ZACZYNA - KLIKNIJ DOWOLNY PRZYCISK BY ZOBACZYC ICH ROZGRYWKE" << std::endl;
            system("pause");
            system("CLS");
            fazagryBB.FazaGryBot(bot2.tablica, bot1.tablicaZakryta, bot2.iloscPolStatkow, bot1.tablica, bot2.tablicaZakryta, bot1.iloscPolStatkow, bot1.statek2, bot1.statek3, bot1.statek4, bot1.statek5, bot2.statek2, bot2.statek3, bot2.statek4, bot2.statek5);
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

