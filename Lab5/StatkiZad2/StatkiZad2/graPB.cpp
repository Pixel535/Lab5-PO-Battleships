#include "graPB.h"


void graPB::FazaGryPB(char tablicaB[granica][granica], char tablicaZakrytaG[granica][granica], int iloscPolStatkowB, char tablicaG[granica][granica], char tablicaZakrytaB[granica][granica], int iloscPolStatkowG, int Gstatek2, int Gstatek3, int Gstatek4, int Gstatek5, int Bstatek2, int Bstatek3, int Bstatek4, int Bstatek5)
{
    int zmienna = NULL;
    int pudlo = NULL;
    int x, y, Zx, Zy, Px, Py;
    
	while (true)
	{

        while (iloscPolStatkowB != 0)
        {
            int x, y;
            WypiszTabliceZakryta(tablicaZakrytaG);
            std::cout << "Pozostala ilosc statkow 2 masztowych: " << Bstatek2 << std::endl;
            std::cout << "Pozostala ilosc statkow 3 masztowych: " << Bstatek3 << std::endl;
            std::cout << "Pozostala ilosc statkow 4 masztowych: " << Bstatek4 << std::endl;
            std::cout << "Pozostala ilosc statkow 5 masztowych: " << Bstatek5 << std::endl;
            std::cout << "-------------------------------------------------------------------------- " << std::endl;
            std::cout << "[GRACZ] - PODAJ POLE DO STRZALU!" << std::endl;
            std::cout << "[x]: " << std::endl;
            std::cin >> x;
            std::cout << "[y]: " << std::endl;
            std::cin >> y;
            if (tablicaB[y][x] == '2' || tablicaB[y][x] == '3' || tablicaB[y][x] == '4' || tablicaB[y][x] == '5')
            {
                if (tablicaZakrytaG[y][x] != 'X')
                {
                    tablicaZakrytaG[y][x] = 'X';
                    iloscPolStatkowB--;
                    if (tablicaB[y][x] == '2')
                    {
                        if (funkcja.CzyZatopiony(x, y, tablicaB, tablicaZakrytaG) == true)
                        {
                            Bstatek2--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            funkcja.WarunkinaO(x, y, tablicaB, tablicaZakrytaG);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaB[y][x] == '3')
                    {

                        if (funkcja.CzyZatopiony(x, y, tablicaB, tablicaZakrytaG) == true)
                        {
                            Bstatek3--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            funkcja.WarunkinaO(x, y, tablicaB, tablicaZakrytaG);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaB[y][x] == '4')
                    {

                        if (funkcja.CzyZatopiony(x, y, tablicaB, tablicaZakrytaG) == true)
                        {
                            Bstatek4--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            funkcja.WarunkinaO(x, y, tablicaB, tablicaZakrytaG);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaB[y][x] == '5')
                    {

                        if (funkcja.CzyZatopiony(x, y, tablicaB, tablicaZakrytaG) == true)
                        {
                            Bstatek5--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            funkcja.WarunkinaO(x, y, tablicaB, tablicaZakrytaG);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                }
                else if (tablicaZakrytaG[y][x] == 'X')
                {
                    std::cout << "JUZ TUTAJ STRZELALES, WYBIERZ INNE POLE !!!" << std::endl;
                    system("pause");
                    system("CLS");
                }

            }
            else if (tablicaB[y][x] == '*')
            {
                if (tablicaZakrytaG[y][x] != 'O')
                {
                    tablicaZakrytaG[y][x] = 'O';
                    std::cout << "PUDLO !!!" << std::endl;
                    system("pause");
                    system("CLS");
                    break;
                }
                else if (tablicaZakrytaG[y][x] == 'O')
                {
                    std::cout << "JUZ TUTAJ STRZELALES, WYBIERZ INNE POLE !!!" << std::endl;
                    system("pause");
                    system("CLS");
                }

            }
        }
        if (iloscPolStatkowB == 0)
        {
            system("CLS");
            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
            std::cout << "KONIEC GRY WYGRYWA [GRACZ] !!!" << std::endl;
            break;
        }

        while (iloscPolStatkowG != 0)
        {
            if (zmienna == NULL)
            {

                x = random(0, 29);
                y = random(0, 29);
                if (tablicaZakrytaB[y][x] == '*')
                {
                    WypiszTabliceZakryta(tablicaZakrytaB);
                    std::cout << "Pozostala ilosc statkow 2 masztowych: " << Gstatek2 << std::endl;
                    std::cout << "Pozostala ilosc statkow 3 masztowych: " << Gstatek3 << std::endl;
                    std::cout << "Pozostala ilosc statkow 4 masztowych: " << Gstatek4 << std::endl;
                    std::cout << "Pozostala ilosc statkow 5 masztowych: " << Gstatek5 << std::endl;
                    std::cout << "-------------------------------------------------------------------------- " << std::endl;
                    std::cout << "---STRZELA BOT---" << std::endl;
                    std::cout << "[x]: " << x << std::endl;
                    std::cout << "[y]: " << y << std::endl;
                    if (tablicaG[y][x] == '2' || tablicaG[y][x] == '3' || tablicaG[y][x] == '4' || tablicaG[y][x] == '5')
                    {
                        if (tablicaZakrytaB[y][x] != 'X')
                        {
                            tablicaZakrytaB[y][x] = 'X';
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaB[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaB[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaB[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaB[y - 1][x + 1] = 'O';
                            }
                            iloscPolStatkowG--;
                            if (tablicaG[y][x] == '2')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                {
                                    Gstatek2--;
                                    funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                    zmienna = NULL;
                                    std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    zmienna = 1;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaG[y][x] == '3')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                {
                                    Gstatek3--;
                                    funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                    zmienna = NULL;
                                    std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna = 1;
                                    std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaG[y][x] == '4')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                {
                                    Gstatek4--;
                                    funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                    zmienna = NULL;
                                    std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna = 1;
                                    std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaG[y][x] == '5')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                {
                                    Gstatek5--;
                                    funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                    zmienna = NULL;
                                    std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna = 1;
                                    std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                        }

                    }
                    else if (tablicaG[y][x] == '*')
                    {

                        tablicaZakrytaB[y][x] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna = NULL;
                        system("pause");
                        system("CLS");
                        break;


                    }
                }
            }
            else if (zmienna == 1)
            {
                x = Zx;
                y = Zy;
                if (pudlo == 1)
                {
                    x = Px;
                    y = Py;
                }
                WypiszTabliceZakryta(tablicaZakrytaB);
                std::cout << "Pozostala ilosc statkow 2 masztowych: " << Gstatek2 << std::endl;
                std::cout << "Pozostala ilosc statkow 3 masztowych: " << Gstatek3 << std::endl;
                std::cout << "Pozostala ilosc statkow 4 masztowych: " << Gstatek4 << std::endl;
                std::cout << "Pozostala ilosc statkow 5 masztowych: " << Gstatek5 << std::endl;
                std::cout << "-------------------------------------------------------------------------- " << std::endl;
                std::cout << "---STRZELA BOT---" << std::endl;

                if (tablicaZakrytaB[y][x + 1] == '*' && x + 1 < granica)
                {
                    if ((x + 1 < granica) && (tablicaG[y][x + 1] == '2' || tablicaG[y][x + 1] == '3' || tablicaG[y][x + 1] == '4' || tablicaG[y][x + 1] == '5'))
                    {
                        x = x + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaG[y][x] == '2' || tablicaG[y][x] == '3' || tablicaG[y][x] == '4' || tablicaG[y][x] == '5')
                        {
                            if (tablicaZakrytaB[y][x] != 'X')
                            {
                                tablicaZakrytaB[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowG--;
                                if (tablicaG[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek2--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek3--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek4--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek5--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx = x;
                        Zy = y;
                    }
                    else if ((x + 1 < granica) && (tablicaG[y][x + 1] == '*') && (tablicaZakrytaB[y][x + 1] == '*'))
                    {
                        x = x + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB[y][x] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna = 1;
                        pudlo = 1;
                        system("pause");
                        system("CLS");

                        break;
                    }

                }
                else if (tablicaZakrytaB[y][x - 1] == '*' && x - 1 >= 0)
                {
                    if ((x - 1 >= 0) && (tablicaG[y][x - 1] == '2' || tablicaG[y][x - 1] == '3' || tablicaG[y][x - 1] == '4' || tablicaG[y][x - 1] == '5'))
                    {
                        x = x - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaG[y][x] == '2' || tablicaG[y][x] == '3' || tablicaG[y][x] == '4' || tablicaG[y][x] == '5')
                        {
                            if (tablicaZakrytaB[y][x] != 'X')
                            {
                                tablicaZakrytaB[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowG--;
                                if (tablicaG[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek2--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek3--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek4--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek5--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx = x;
                        Zy = y;
                    }
                    else if ((x - 1 >= 0) && (tablicaG[y][x - 1] == '*') && (tablicaZakrytaB[y][x - 1] == '*'))
                    {
                        x = x - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB[y][x] = 'O';
                        zmienna = 1;
                        pudlo = 1;
                        std::cout << "PUDLO !!!" << std::endl;
                        system("pause");
                        system("CLS");

                        break;
                    }

                }
                else if (tablicaZakrytaB[y + 1][x] == '*' && y + 1 < granica)
                {
                    if ((y + 1 < granica) && (tablicaG[y + 1][x] == '2' || tablicaG[y + 1][x] == '3' || tablicaG[y + 1][x] == '4' || tablicaG[y + 1][x] == '5'))
                    {
                        y = y + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaG[y][x] == '2' || tablicaG[y][x] == '3' || tablicaG[y][x] == '4' || tablicaG[y][x] == '5')
                        {
                            if (tablicaZakrytaB[y][x] != 'X')
                            {
                                tablicaZakrytaB[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowG--;
                                if (tablicaG[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek2--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek3--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek4--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek5--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx = x;
                        Zy = y;
                    }
                    else if ((y + 1 < granica) && (tablicaG[y + 1][x] == '*') && (tablicaZakrytaB[y + 1][x] == '*'))
                    {
                        y = y + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB[y][x] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna = 1;
                        pudlo = 1;
                        system("pause");
                        system("CLS");

                        break;
                    }

                }
                else if (tablicaZakrytaB[y - 1][x] == '*' && y - 1 >= 0)
                {
                    if ((y - 1 >= 0) && (tablicaG[y - 1][x] == '2' || tablicaG[y - 1][x] == '3' || tablicaG[y - 1][x] == '4' || tablicaG[y - 1][x] == '5'))
                    {
                        y = y - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaG[y][x] == '2' || tablicaG[y][x] == '3' || tablicaG[y][x] == '4' || tablicaG[y][x] == '5')
                        {
                            if (tablicaZakrytaB[y][x] != 'X')
                            {
                                tablicaZakrytaB[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowG--;
                                if (tablicaG[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek2--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek3--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek4--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaG[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == true)
                                    {
                                        Gstatek5--;
                                        funkcja.WarunkinaO(x, y, tablicaG, tablicaZakrytaB);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx = x;
                        Zy = y;
                    }
                    else if ((y - 1 >= 0) && (tablicaG[y - 1][x] == '*') && (tablicaZakrytaB[y - 1][x] == '*'))
                    {
                        y = y - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB[y][x] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna = 1;
                        pudlo = 1;
                        system("pause");
                        system("CLS");

                        break;
                    }

                }

                if ((funkcja.CzyZatopiony(x, y, tablicaG, tablicaZakrytaB) == false) && funkcja2.Warun(x, y, tablicaG, tablicaZakrytaB))
                {
                    zmienna = 1;
                    pudlo = 1;
                }
            }
        }
        if (iloscPolStatkowG == 0)
        {
            system("CLS");
            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
            std::cout << "KONIEC GRY WYGRYWA [BOT] !!!" << std::endl;
            break;
        }


	}
}
