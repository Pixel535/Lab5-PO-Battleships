#include "gra.h"
#include <iostream>
#include <stdlib.h>

void gra::Fazagry(char tablicaG2[granica][granica], char tablicaZakrytaG1[granica][granica], int iloscPolStatkowG2, char tablicaG1[granica][granica], char tablicaZakrytaG2[granica][granica], int iloscPolStatkowG1, int G1statek2, int G1statek3, int G1statek4, int G1statek5, int G2statek2, int G2statek3, int G2statek4, int G2statek5)
{
    while (true)
    {
        while (iloscPolStatkowG2 != 0)
        {
            int x, y;
            WypiszTabliceZakryta(tablicaZakrytaG1);
            std::cout << "Pozostala ilosc statkow 2 masztowych: " << G2statek2 << std::endl;
            std::cout << "Pozostala ilosc statkow 3 masztowych: " << G2statek3 << std::endl;
            std::cout << "Pozostala ilosc statkow 4 masztowych: " << G2statek4 << std::endl;
            std::cout << "Pozostala ilosc statkow 5 masztowych: " << G2statek5 << std::endl;
            std::cout << "-------------------------------------------------------------------------- " << std::endl;
            std::cout << "[GRACZ 1] - PODAJ POLE DO STRZALU!" << std::endl;
            std::cout << "[x]: " << std::endl;
            std::cin >> x;
            std::cout << "[y]: " << std::endl;
            std::cin >> y;
            if (tablicaG2[y][x] == '2' || tablicaG2[y][x] == '3' || tablicaG2[y][x] == '4' || tablicaG2[y][x] == '5')
            {
                if (tablicaZakrytaG1[y][x] != 'X')
                {
                    tablicaZakrytaG1[y][x] = 'X';
                    iloscPolStatkowG2--;
                    if (tablicaG2[y][x] == '2')
                    {
                        if (CzyZatopiony(x, y, tablicaG2, tablicaZakrytaG1) == true)
                        {
                            G2statek2--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG2, tablicaZakrytaG1);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaG2[y][x] == '3')
                    {

                        if (CzyZatopiony(x, y, tablicaG2, tablicaZakrytaG1) == true)
                        {
                            G2statek3--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG2, tablicaZakrytaG1);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaG2[y][x] == '4')
                    {

                        if (CzyZatopiony(x, y, tablicaG2, tablicaZakrytaG1) == true)
                        {
                            G2statek4--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG2, tablicaZakrytaG1);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaG2[y][x] == '5')
                    {

                        if (CzyZatopiony(x, y, tablicaG2, tablicaZakrytaG1) == true)
                        {
                            G2statek5--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG2, tablicaZakrytaG1);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                }
                else if (tablicaZakrytaG1[y][x] == 'X')
                {
                    std::cout << "JUZ TUTAJ STRZELALES, WYBIERZ INNE POLE !!!" << std::endl;
                    system("pause");
                    system("CLS");
                }

            }
            else if (tablicaG2[y][x] == '*')
            {
                if (tablicaZakrytaG1[y][x] != 'O')
                {
                    tablicaZakrytaG1[y][x] = 'O';
                    std::cout << "PUDLO !!!" << std::endl;
                    system("pause");
                    system("CLS");
                    break;
                }
                else if (tablicaZakrytaG1[y][x] == 'O')
                {
                    std::cout << "JUZ TUTAJ STRZELALES, WYBIERZ INNE POLE !!!" << std::endl;
                    system("pause");
                    system("CLS");
                }

            }
        }
        if (iloscPolStatkowG2 == 0)
        {
            system("CLS");
            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
            std::cout << "KONIEC GRY WYGRYWA [GRACZ 1] !!!" << std::endl;
            break;
        }
        while (iloscPolStatkowG1 != 0)
        {
            int x, y;
            WypiszTabliceZakryta(tablicaZakrytaG2);
            std::cout << "Pozostala ilosc statkow 2 masztowych: " << G1statek2 << std::endl;
            std::cout << "Pozostala ilosc statkow 3 masztowych: " << G1statek3 << std::endl;
            std::cout << "Pozostala ilosc statkow 4 masztowych: " << G1statek4 << std::endl;
            std::cout << "Pozostala ilosc statkow 5 masztowych: " << G1statek5 << std::endl;
            std::cout << "-------------------------------------------------------------------------- " << std::endl;
            std::cout << "[GRACZ 2] - PODAJ POLE DO STRZALU!" << std::endl;
            std::cout << "[x]: " << std::endl;
            std::cin >> x;
            std::cout << "[y]: " << std::endl;
            std::cin >> y;
            if (tablicaG1[y][x] == '2' || tablicaG1[y][x] == '3' || tablicaG1[y][x] == '4' || tablicaG1[y][x] == '5')
            {
                if (tablicaZakrytaG2[y][x] != 'X')
                {
                    tablicaZakrytaG2[y][x] = 'X';
                    iloscPolStatkowG1--;
                    if (tablicaG1[y][x] == '2')
                    {

                        if (CzyZatopiony(x, y, tablicaG1, tablicaZakrytaG2) == true)
                        {
                            G1statek2--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG1, tablicaZakrytaG2);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaG1[y][x] == '3')
                    {

                        if (CzyZatopiony(x, y, tablicaG1, tablicaZakrytaG2) == true)
                        {
                            G1statek3--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG1, tablicaZakrytaG2);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaG1[y][x] == '4')
                    {

                        if (CzyZatopiony(x, y, tablicaG1, tablicaZakrytaG2) == true)
                        {
                            G1statek4--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG1, tablicaZakrytaG2);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                    if (tablicaG1[y][x] == '5')
                    {

                        if (CzyZatopiony(x, y, tablicaG1, tablicaZakrytaG2) == true)
                        {
                            G1statek5--;
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            WarunkinaO(x, y, tablicaG1, tablicaZakrytaG2);
                            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                        else
                        {
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaG1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaG1[y - 1][x + 1] = 'O';
                            }
                            std::cout << "TRAFIENIE !!!" << std::endl;
                            std::cout << "STRZELAJ JESZCZE RAZ !!!" << std::endl;
                            system("pause");
                            system("CLS");
                        }
                    }
                }
                else if (tablicaZakrytaG2[y][x] == 'X')
                {
                    std::cout << "JUZ TUTAJ STRZELALES, WYBIERZ INNE POLE !!!" << std::endl;
                    system("pause");
                    system("CLS");
                }
            }
            else if (tablicaG1[y][x] == '*')
            {
                if (tablicaZakrytaG2[y][x] != 'O')
                {
                    tablicaZakrytaG2[y][x] = 'O';
                    std::cout << "PUDLO !!!" << std::endl;
                    system("pause");
                    system("CLS");
                    break;
                }
                else if (tablicaZakrytaG2[y][x] == 'O')
                {
                    std::cout << "JUZ TUTAJ STRZELALES, WYBIERZ INNE POLE !!!" << std::endl;
                    system("pause");
                    system("CLS");
                }

            }
        }
        if (iloscPolStatkowG1 == 0)
        {
            system("CLS");
            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
            std::cout << "KONIEC GRY WYGRYWA [GRACZ 2] !!!" << std::endl;
            break;
        }
    }

}

void gra::WarunkinaO(int x, int y, char tablica[granica][granica], char tablicaZakryta[granica][granica])
{
    int i;
    if ((x - 1 >= 0 && tablicaZakryta[y][x - 1] == 'X') || (x + 1 < granica && tablicaZakryta[y][x + 1] == 'X'))
    {
        i = 0;
        while (x - i >= 0 && tablicaZakryta[y][x - i] == 'X')
        {
            if (y + 1 < granica)
            {
                tablicaZakryta[y + 1][x - i] = 'O';
            }
            if (y - 1 >= 0)
            {
                tablicaZakryta[y - 1][x - i] = 'O';
            }
            i++;
        }
        if (x - i >= 0 && tablicaZakryta[y][x - i] == '*')
        {
            tablicaZakryta[y][x - i] = 'O';
        }
        i = 0;
        while (x + i < granica && tablicaZakryta[y][x + i] == 'X')
        {
            if (y + 1 < granica)
            {
                tablicaZakryta[y + 1][x + i] = 'O';
            }
            if (y - 1 >= 0)
            {
                tablicaZakryta[y - 1][x + i] = 'O';
            }
            i++;
        }
        if (x + i < granica && tablicaZakryta[y][x + i] == '*')
        {
            tablicaZakryta[y][x + i] = 'O';
        }
    }
    else if ((y + 1 < granica && tablicaZakryta[y + 1][x] == 'X') || (y - 1 >= 0 && tablicaZakryta[y - 1][x] == 'X'))
    {
        i = 0;
        while (y - i >= 0 && tablicaZakryta[y - i][x] == 'X')
        {
            if (x - 1 >= 0 && tablicaZakryta[y - i][x - 1] == '*')
            {
                tablicaZakryta[y - i][x - 1] = 'O';
            }
            if (x + 1 < granica && tablicaZakryta[y - i][x + 1] == '*')
            {
                tablicaZakryta[y - i][x + 1] = 'O';
            }

            i++;
        }
        if (y - i >= 0 && tablicaZakryta[y - i][x] == '*')
        {
            tablicaZakryta[y - i][x] = 'O';
        }
        i = 0;
        while (y + i < granica && tablicaZakryta[y + i][x] == 'X')
        {

            if (x - 1 >= 0 && tablicaZakryta[y + i][x - 1] == '*')
            {
                tablicaZakryta[y + i][x - 1] = 'O';
            }
            if (x + 1 < granica && tablicaZakryta[y + i][x + 1] == '*')
            {
                tablicaZakryta[y + i][x + 1] = 'O';
            }

            i++;
        }
        if (y + i < granica && tablicaZakryta[y + i][x] == '*')
        {
            tablicaZakryta[y + i][x] = 'O';
        }
    }
}

bool gra::CzyZatopiony(int x, int y, char tablica[granica][granica], char tablicaZakryta[granica][granica])
{
    int maszt = 1;
    int i;
    if ((x - 1 >= 0 && tablica[y][x - 1] != '*') || (x + 1 < granica && tablica[y][x + 1] != '*'))
    {
        i = 1;
        while (x - i >= 0 && tablica[y][x - i] != '*')
        {
            if (tablicaZakryta[y][x - i] == 'X')
            {
                maszt++;
            }
            else return false;
            i++;
        }
        i = 1;
        while (x + i < granica && tablica[y][x + i] != '*')
        {
            if (tablicaZakryta[y][x + i] == 'X')
            {
                maszt++;
            }
            else return false;
            i++;
        }
        return true;
    }
    else if ((y + 1 < granica && tablica[y + 1][x] != '*') || (y - 1 >= 0 && tablica[y - 1][x] != '*'))
    {
        i = 1;
        while (y - i >= 0 && tablica[y - i][x] != '*')
        {
            if (tablicaZakryta[y - i][x] == 'X') maszt++;
            else return false;
            i++;
        }
        i = 1;
        while (y + i < granica && tablica[y + i][x] != '*')
        {
            if (tablicaZakryta[y + i][x] == 'X') maszt++;
            else return false;
            i++;
        }
        return true;
    }

}
