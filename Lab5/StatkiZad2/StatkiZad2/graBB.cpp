#include "graBB.h"

void graBB::FazaGryBot(char tablicaB2[granica][granica], char tablicaZakrytaB1[granica][granica], int iloscPolStatkowB2, char tablicaB1[granica][granica], char tablicaZakrytaB2[granica][granica], int iloscPolStatkowB1, int B1statek2, int B1statek3, int B1statek4, int B1statek5, int B2statek2, int B2statek3, int B2statek4, int B2statek5)
{
    int zmienna = NULL;
    int zmienna2 = NULL;
    int pudlo = NULL;
    int pudlo2 = NULL;
    int x, y, Zx, Zy, Px, Py;
    int x2, y2, Zx2, Zy2, Px2, Py2;
    srand(time(NULL));
	while (true)
	{
        while (iloscPolStatkowB2 != 0)
        {
            if (zmienna == NULL)
            { 
                
                x = random(0, 29);
                y = random(0, 29);
                if (tablicaZakrytaB1[y][x] == '*')
                {
                    WypiszTabliceZakryta(tablicaZakrytaB1);
                    std::cout << "Pozostala ilosc statkow 2 masztowych: " << B2statek2 << std::endl;
                    std::cout << "Pozostala ilosc statkow 3 masztowych: " << B2statek3 << std::endl;
                    std::cout << "Pozostala ilosc statkow 4 masztowych: " << B2statek4 << std::endl;
                    std::cout << "Pozostala ilosc statkow 5 masztowych: " << B2statek5 << std::endl;
                    std::cout << "-------------------------------------------------------------------------- " << std::endl;
                    std::cout << "---STRZELA BOT 1---" << std::endl;
                    std::cout << "[x]: " << x << std::endl;
                    std::cout << "[y]: " << y << std::endl;
                    if (tablicaB2[y][x] == '2' || tablicaB2[y][x] == '3' || tablicaB2[y][x] == '4' || tablicaB2[y][x] == '5')
                    {
                        if (tablicaZakrytaB1[y][x] != 'X')
                        {
                            tablicaZakrytaB1[y][x] = 'X';
                            if (y + 1 < granica && x + 1 < granica)
                            {
                                tablicaZakrytaB1[y + 1][x + 1] = 'O';
                            }
                            if (y + 1 < granica && x - 1 >= 0)
                            {
                                tablicaZakrytaB1[y + 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x - 1 >= 0)
                            {
                                tablicaZakrytaB1[y - 1][x - 1] = 'O';
                            }
                            if (y - 1 >= 0 && x + 1 < granica)
                            {
                                tablicaZakrytaB1[y - 1][x + 1] = 'O';
                            }
                            iloscPolStatkowB2--;
                            if (tablicaB2[y][x] == '2')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                {
                                    B2statek2--;
                                    funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                    zmienna = NULL;
                                    std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    zmienna = 1;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaB2[y][x] == '3')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                {
                                    B2statek3--;
                                    funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                    zmienna = NULL;
                                    std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna = 1;
                                    std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaB2[y][x] == '4')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                {
                                    B2statek4--;
                                    funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                    zmienna = NULL;
                                    std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna = 1;
                                    std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    Px = x;
                                    Py = y;
                                    Zx = x;
                                    Zy = y;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaB2[y][x] == '5')
                            {
                                if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                {
                                    B2statek5--;
                                    funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                    zmienna = NULL;
                                    std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna = 1;
                                    std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
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
                    else if (tablicaB2[y][x] == '*')
                    {
                        
                            tablicaZakrytaB1[y][x] = 'O';
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
                WypiszTabliceZakryta(tablicaZakrytaB1);
                std::cout << "Pozostala ilosc statkow 2 masztowych: " << B2statek2 << std::endl;
                std::cout << "Pozostala ilosc statkow 3 masztowych: " << B2statek3 << std::endl;
                std::cout << "Pozostala ilosc statkow 4 masztowych: " << B2statek4 << std::endl;
                std::cout << "Pozostala ilosc statkow 5 masztowych: " << B2statek5 << std::endl;
                std::cout << "-------------------------------------------------------------------------- " << std::endl;
                std::cout << "---STRZELA BOT 1---" << std::endl;
                
                if (tablicaZakrytaB1[y][x + 1] == '*' && x+1<granica)
                {
                    if ((x + 1 < granica) && (tablicaB2[y][x + 1] == '2' || tablicaB2[y][x + 1] == '3' || tablicaB2[y][x + 1] == '4' || tablicaB2[y][x + 1] == '5'))
                    {
                        x = x + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaB2[y][x] == '2' || tablicaB2[y][x] == '3' || tablicaB2[y][x] == '4' || tablicaB2[y][x] == '5')
                        {
                            if (tablicaZakrytaB1[y][x] != 'X')
                            {
                                tablicaZakrytaB1[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowB2--;
                                if (tablicaB2[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek2--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek3--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek4--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek5--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
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
                    else if ((x + 1 < granica) && (tablicaB2[y][x+1] == '*') && (tablicaZakrytaB1[y][x + 1] == '*'))
                    {
                         x = x + 1;
                         std::cout << "[x]: " << x << std::endl;
                         std::cout << "[y]: " << y << std::endl;
                         tablicaZakrytaB1[y][x] = 'O';
                         std::cout << "PUDLO !!!" << std::endl;
                         zmienna = 1;
                         pudlo = 1;
                         system("pause");
                         system("CLS");
                         
                         break;
                    }
                    
                }
                else if (tablicaZakrytaB1[y][x - 1] == '*' && x-1 >= 0)
                {
                    if ((x - 1 >= 0) && (tablicaB2[y][x - 1] == '2' || tablicaB2[y][x - 1] == '3' || tablicaB2[y][x - 1] == '4' || tablicaB2[y][x - 1] == '5'))
                    {
                        x = x - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaB2[y][x] == '2' || tablicaB2[y][x] == '3' || tablicaB2[y][x] == '4' || tablicaB2[y][x] == '5')
                        {
                            if (tablicaZakrytaB1[y][x] != 'X')
                            {
                                tablicaZakrytaB1[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowB2--;
                                if (tablicaB2[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek2--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek3--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek4--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek5--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
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
                    else if ((x - 1 >= 0) && (tablicaB2[y][x-1] == '*') && (tablicaZakrytaB1[y][x - 1] == '*'))
                    {
                        x = x - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB1[y][x] = 'O';
                        zmienna = 1;
                        pudlo = 1;
                        std::cout << "PUDLO !!!" << std::endl;
                        system("pause");
                        system("CLS");
                        
                        break;
                    }
                    
                }
                else if (tablicaZakrytaB1[y + 1][x] == '*' && y+1 < granica)
                {
                    if ((y + 1 < granica) && (tablicaB2[y + 1][x] == '2' || tablicaB2[y + 1][x] == '3' || tablicaB2[y + 1][x] == '4' || tablicaB2[y + 1][x] == '5'))
                    {
                        y = y + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaB2[y][x] == '2' || tablicaB2[y][x] == '3' || tablicaB2[y][x] == '4' || tablicaB2[y][x] == '5')
                        {
                            if (tablicaZakrytaB1[y][x] != 'X')
                            {
                                tablicaZakrytaB1[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowB2--;
                                if (tablicaB2[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek2--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek3--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek4--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek5--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
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
                    else if ((y + 1 < granica) && (tablicaB2[y+1][x] == '*') && (tablicaZakrytaB1[y+1][x] == '*'))
                    {
                        y = y + 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB1[y][x] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna = 1;
                        pudlo = 1;
                        system("pause");
                        system("CLS");
                        
                        break;
                    }
                    
                }
                else if (tablicaZakrytaB1[y - 1][x] == '*' && y-1 >= 0)
                {
                    if ((y - 1 >= 0) && (tablicaB2[y - 1][x] == '2' || tablicaB2[y - 1][x] == '3' || tablicaB2[y - 1][x] == '4' || tablicaB2[y - 1][x] == '5'))
                    {
                        y = y - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        if (tablicaB2[y][x] == '2' || tablicaB2[y][x] == '3' || tablicaB2[y][x] == '4' || tablicaB2[y][x] == '5')
                        {
                            if (tablicaZakrytaB1[y][x] != 'X')
                            {
                                tablicaZakrytaB1[y][x] = 'X';
                                if (y + 1 < granica && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y + 1][x + 1] = 'O';
                                }
                                if (y + 1 < granica && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y + 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x - 1 >= 0)
                                {
                                    tablicaZakrytaB1[y - 1][x - 1] = 'O';
                                }
                                if (y - 1 >= 0 && x + 1 < granica)
                                {
                                    tablicaZakrytaB1[y - 1][x + 1] = 'O';
                                }
                                iloscPolStatkowB2--;
                                if (tablicaB2[y][x] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek2--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna = 1;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek3--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek4--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB2[y][x] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x, y, tablicaB2, tablicaZakrytaB1) == true)
                                    {
                                        B2statek5--;
                                        funkcja.WarunkinaO(x, y, tablicaB2, tablicaZakrytaB1);
                                        zmienna = NULL;
                                        pudlo = NULL;
                                        std::cout << "BOT 1 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna = 1;
                                        std::cout << "BOT 1 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
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
                    else if ((y - 1 >= 0) && (tablicaB2[y-1][x] == '*') && (tablicaZakrytaB1[y-1][x] == '*'))
                    {
                        y = y - 1;
                        std::cout << "[x]: " << x << std::endl;
                        std::cout << "[y]: " << y << std::endl;
                        tablicaZakrytaB1[y][x] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna = 1;
                        pudlo = 1;
                        system("pause");
                        system("CLS");

                        break;
                    }
                    
                }

                if ((funkcja.CzyZatopiony(x,y,tablicaB2,tablicaZakrytaB1) == false) && (Warun(x, y, tablicaB2, tablicaZakrytaB1) == true))
                {
                    
                    zmienna = 1;
                    pudlo = 1;
                }
            }
        }
        if (iloscPolStatkowB2 == 0)
        {
            system("CLS");
            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
            std::cout << "KONIEC GRY WYGRYWA [BOT 1] !!!" << std::endl;
            break;
        }
        while (iloscPolStatkowB1 != 0)
        {
            
            
            if (zmienna2 == NULL)
            {
                
                x2 = random(0, 29);
                y2 = random(0, 29);
                
                if (tablicaZakrytaB2[y2][x2] == '*')
                {
                    WypiszTabliceZakryta(tablicaZakrytaB2);
                    std::cout << "Pozostala ilosc statkow 2 masztowych: " << B1statek2 << std::endl;
                    std::cout << "Pozostala ilosc statkow 3 masztowych: " << B1statek3 << std::endl;
                    std::cout << "Pozostala ilosc statkow 4 masztowych: " << B1statek4 << std::endl;
                    std::cout << "Pozostala ilosc statkow 5 masztowych: " << B1statek5 << std::endl;
                    std::cout << "-------------------------------------------------------------------------- " << std::endl;
                    std::cout << "---STRZELA BOT 2---" << std::endl;
                    std::cout << "[x]: " << x2 << std::endl;
                    std::cout << "[y]: " << y2 << std::endl;
                    if (tablicaB1[y2][x2] == '2' || tablicaB1[y2][x2] == '3' || tablicaB1[y2][x2] == '4' || tablicaB1[y2][x2] == '5')
                    {
                        if (tablicaZakrytaB2[y2][x2] != 'X')
                        {
                            tablicaZakrytaB2[y2][x2] = 'X';
                            if (y2 + 1 < granica && x2 + 1 < granica)
                            {
                                tablicaZakrytaB2[y2 + 1][x2 + 1] = 'O';
                            }
                            if (y2 + 1 < granica && x2 - 1 >= 0)
                            {
                                tablicaZakrytaB2[y2 + 1][x2 - 1] = 'O';
                            }
                            if (y2 - 1 >= 0 && x2 - 1 >= 0)
                            {
                                tablicaZakrytaB2[y2 - 1][x2 - 1] = 'O';
                            }
                            if (y2 - 1 >= 0 && x2 + 1 < granica)
                            {
                                tablicaZakrytaB2[y2 - 1][x2 + 1] = 'O';
                            }
                            iloscPolStatkowB1--;
                            if (tablicaB1[y2][x2] == '2')
                            {
                                if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                {
                                    B1statek2--;
                                    funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                    zmienna2 = NULL;
                                    std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna2 = 1;
                                    Px2 = x2;
                                    Py2 = y2;
                                    Zx2 = x2;
                                    Zy2 = y2;
                                    std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaB1[y2][x2] == '3')
                            {
                                if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                {
                                    B1statek3--;
                                    funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                    zmienna2 = NULL;
                                    std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna2 = 1;
                                    Px2 = x2;
                                    Py2 = y2;
                                    Zx2 = x2;
                                    Zy2 = y2;
                                    std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaB1[y2][x2] == '4')
                            {
                                if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                {
                                    B1statek4--;
                                    funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                    zmienna2 = NULL;
                                    std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna2 = 1;
                                    Px2 = x2;
                                    Py2 = y2;
                                    Zx2 = x2;
                                    Zy2 = y2;
                                    std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                            if (tablicaB1[y2][x2] == '5')
                            {
                                if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                {
                                    B1statek5--;
                                    funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                    zmienna2 = NULL;
                                    std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                                else
                                {
                                    zmienna2 = 1;
                                    Px2 = x2;
                                    Py2 = y2;
                                    Zx2 = x2;
                                    Zy2 = y2;
                                    std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                    system("pause");
                                    system("CLS");
                                }
                            }
                        }
                        
                    }
                    else if (tablicaB1[y2][x2] == '*')
                    {
                        
                            tablicaZakrytaB2[y2][x2] = 'O';
                            std::cout << "PUDLO !!!" << std::endl;
                            zmienna2 = NULL;
                            system("pause");
                            system("CLS");
                            break;
                       

                    }
                }
            }
            else if (zmienna2 == 1)
            {
                x2 = Zx2;
                y2 = Zy2;
                if (pudlo2 == 1)
                {
                    x2 = Px2;
                    y2 = Py2;
                }
                WypiszTabliceZakryta(tablicaZakrytaB2);
                std::cout << "Pozostala ilosc statkow 2 masztowych: " << B1statek2 << std::endl;
                std::cout << "Pozostala ilosc statkow 3 masztowych: " << B1statek3 << std::endl;
                std::cout << "Pozostala ilosc statkow 4 masztowych: " << B1statek4 << std::endl;
                std::cout << "Pozostala ilosc statkow 5 masztowych: " << B1statek5 << std::endl;
                std::cout << "-------------------------------------------------------------------------- " << std::endl;
                std::cout << "---STRZELA BOT 2---" << std::endl;
                if (tablicaZakrytaB2[y2][x2 + 1] == '*' && x2+1 < granica)
                {
                    if ((x2 + 1 < granica) && (tablicaB1[y2][x2 + 1] == '2' || tablicaB1[y2][x2 + 1] == '3' || tablicaB1[y2][x2 + 1] == '4' || tablicaB1[y2][x2 + 1] == '5'))
                    {
                        x2 = x2 + 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        if (tablicaB1[y2][x2] == '2' || tablicaB1[y2][x2] == '3' || tablicaB1[y2][x2] == '4' || tablicaB1[y2][x2] == '5')
                        {
                            if (tablicaZakrytaB2[y2][x2] != 'X')
                            {
                                tablicaZakrytaB2[y2][x2] = 'X';
                                if (y2 + 1 < granica && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 + 1] = 'O';
                                }
                                if (y2 + 1 < granica && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 + 1] = 'O';
                                }
                                iloscPolStatkowB1--;
                                if (tablicaB1[y2][x2] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek2--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna2 = 1;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek3--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek4--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek5--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx2 = x2;
                        Zy2 = y2;
                    }
                    else if ((x2 + 1 < granica) && (tablicaB1[y2][x2+1] == '*') && (tablicaZakrytaB2[y2][x2 + 1] == '*'))
                    {
                        x2 = x2 + 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        tablicaZakrytaB2[y2][x2] = 'O';
                        zmienna2 = 1;
                        pudlo2 = 1;
                        std::cout << "PUDLO !!!" << std::endl;
                        system("pause");
                        system("CLS");

                        break;
                    }
                    
                }
                else if (tablicaZakrytaB2[y2][x2 - 1] == '*' && x2-1 >= 0)
                {
                    if ((x2 - 1 >= 0) && (tablicaB1[y2][x2 - 1] == '2' || tablicaB1[y2][x2 - 1] == '3' || tablicaB1[y2][x2 - 1] == '4' || tablicaB1[y2][x2 - 1] == '5'))
                    {
                        x2 = x2 - 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        if (tablicaB1[y2][x2] == '2' || tablicaB1[y2][x2] == '3' || tablicaB1[y2][x2] == '4' || tablicaB1[y2][x2] == '5')
                        {
                            if (tablicaZakrytaB2[y2][x2] != 'X')
                            {
                                tablicaZakrytaB2[y2][x2] = 'X';
                                if (y2 + 1 < granica && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 + 1] = 'O';
                                }
                                if (y2 + 1 < granica && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 + 1] = 'O';
                                }
                                iloscPolStatkowB1--;
                                if (tablicaB1[y2][x2] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek2--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna2 = 1;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek3--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek4--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek5--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx2 = x2;
                        Zy2 = y2;
                    }
                    else if ((x2 - 1 >= 0)&& (tablicaB1[y2][x2-1] == '*') && (tablicaZakrytaB2[y2][x2 - 1] == '*'))
                    {
                        x2 = x2 - 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        tablicaZakrytaB2[y2][x2] = 'O';
                        zmienna2 = 1;
                        pudlo2 = 1;
                        std::cout << "PUDLO !!!" << std::endl;
                        system("pause");
                        system("CLS");

                        break;
                    }
                    
                }
                else if (tablicaZakrytaB2[y2 + 1][x2] == '*' && y2+1 < granica)
                {
                    if ((y2 + 1 < granica) && (tablicaB1[y2 + 1][x2] == '2' || tablicaB1[y2 + 1][x2] == '3' || tablicaB1[y2 + 1][x2] == '4' || tablicaB1[y2 + 1][x2] == '5'))
                    {
                        y2 = y2 + 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        if (tablicaB1[y2][x2] == '2' || tablicaB1[y2][x2] == '3' || tablicaB1[y2][x2] == '4' || tablicaB1[y2][x2] == '5')
                        {
                            if (tablicaZakrytaB2[y2][x2] != 'X')
                            {
                                tablicaZakrytaB2[y2][x2] = 'X';
                                if (y2 + 1 < granica && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 + 1] = 'O';
                                }
                                if (y2 + 1 < granica && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 + 1] = 'O';
                                }
                                iloscPolStatkowB1--;
                                if (tablicaB1[y2][x2] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek2--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna2 = 1;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek3--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek4--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek5--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx2 = x2;
                        Zy2 = y2;
                    }
                    else if ((y2 + 1 < granica) && (tablicaB1[y2+1][x2] == '*') && (tablicaZakrytaB2[y2+1][x2] == '*'))
                    {
                        y2 = y2 + 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        tablicaZakrytaB2[y2][x2] = 'O';
                        std::cout << "PUDLO !!!" << std::endl;
                        zmienna2 = 1;
                        pudlo2 = 1;
                        system("pause");
                        system("CLS");

                        break;
                    }
                    
                }
                else if (tablicaZakrytaB2[y2 - 1][x2] == '*' && y2-1 >= 0)
                {
                    if ((y2 - 1 >= 0) && (tablicaB1[y2 - 1][x2] == '2' || tablicaB1[y2 - 1][x2] == '3' || tablicaB1[y2 - 1][x2] == '4' || tablicaB1[y2 - 1][x2] == '5'))
                    {
                        y2 = y2 - 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        if (tablicaB1[y2][x2] == '2' || tablicaB1[y2][x2] == '3' || tablicaB1[y2][x2] == '4' || tablicaB1[y2][x2] == '5')
                        {
                            if (tablicaZakrytaB2[y2][x2] != 'X')
                            {
                                tablicaZakrytaB2[y2][x2] = 'X';
                                if (y2 + 1 < granica && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 + 1] = 'O';
                                }
                                if (y2 + 1 < granica && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 + 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 - 1 >= 0)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 - 1] = 'O';
                                }
                                if (y2 - 1 >= 0 && x2 + 1 < granica)
                                {
                                    tablicaZakrytaB2[y2 - 1][x2 + 1] = 'O';
                                }
                                iloscPolStatkowB1--;
                                if (tablicaB1[y2][x2] == '2')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek2--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        zmienna2 = 1;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '3')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek3--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '4')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek4--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                                if (tablicaB1[y2][x2] == '5')
                                {
                                    if (funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == true)
                                    {
                                        B1statek5--;
                                        funkcja.WarunkinaO(x2, y2, tablicaB1, tablicaZakrytaB2);
                                        zmienna2 = NULL;
                                        pudlo2 = NULL;
                                        std::cout << "BOT 2 ZATOPIL STATEK STRZELA JESZCZE RAZ !!!" << std::endl;
                                        system("pause");
                                        system("CLS");
                                    }
                                    else
                                    {
                                        zmienna2 = 1;
                                        std::cout << "BOT 2 TRAFIL!!! STRZELA PONOWNIE" << std::endl;
                                        pudlo2 = NULL;
                                        system("pause");
                                        system("CLS");
                                    }
                                }
                            }
                        }
                        Zx2 = x2;
                        Zy2 = y2;
                    }
                    else if ((y2 - 1 >= 0) && (tablicaB1[y2-1][x2] == '*') && (tablicaZakrytaB2[y2-1][x2] == '*'))
                    {
                        y2 = y2 - 1;
                        std::cout << "[x]: " << x2 << std::endl;
                        std::cout << "[y]: " << y2 << std::endl;
                        tablicaZakrytaB2[y2][x2] = 'O';
                        zmienna2 = 1;
                        std::cout << "PUDLO !!!" << std::endl;
                        pudlo2 = 1;
                        system("pause");
                        system("CLS");

                        break;
                    }
                    
                }

                ///
                if ((funkcja.CzyZatopiony(x2, y2, tablicaB1, tablicaZakrytaB2) == false) && (Warun(x2,y2, tablicaB1, tablicaZakrytaB2) == true))
                {
                    
                    zmienna2 = 1;
                    pudlo2 = 1;
                }
            }
        }
        if (iloscPolStatkowB1 == 0)
        {
            system("CLS");
            std::cout << "TRAFIONY ZATOPIONY !!!" << std::endl;
            std::cout << "KONIEC GRY WYGRYWA [BOT 2] !!!" << std::endl;
            break;
        }
    }
}

bool graBB::Warun(int x, int y, char tablicaB[granica][granica], char tablicaZakrytaB[granica][granica])
{
    if (tablicaZakrytaB[y][x + 1] != '*' && tablicaZakrytaB[y][x - 1] != '*' && tablicaZakrytaB[y - 1][x] != '*' && tablicaZakrytaB[y + 1][x] != '*' && x+1< granica && x-1 >= 0 && y+1 < granica && y-1 >= 0)
    {
       
        return true;
    }
    else if (tablicaZakrytaB[y][x + 1] != '*' && tablicaZakrytaB[y - 1][x] != '*' && tablicaZakrytaB[y + 1][x] != '*' && x - 1 < 0)
    {
        
        return true;
    }
    else if (tablicaZakrytaB[y][x + 1] != '*' && tablicaZakrytaB[y][x - 1] != '*' && tablicaZakrytaB[y - 1][x] != '*' && y+1 >=granica)
    {
        
        return true;
    }
    else if (tablicaZakrytaB[y][x - 1] != '*' && tablicaZakrytaB[y - 1][x] != '*' && tablicaZakrytaB[y + 1][x] != '*' && x+1 >=granica)
    {
        
        return true;
    }
    else if (tablicaZakrytaB[y][x + 1] != '*' && tablicaZakrytaB[y][x - 1] != '*' && tablicaZakrytaB[y + 1][x] != '*' && y-1 <0)
    {
        
        return true;
    }
    else if (tablicaZakrytaB[y][x + 1] != '*' && tablicaZakrytaB[y + 1][x] != '*' && y - 1 < 0 && x - 1 < 0)
    {
        
        return true;
    }
    else if (tablicaZakrytaB[y][x - 1] != '*' && tablicaZakrytaB[y - 1][x] != '*' && y + 1 >= granica && x + 1 >= granica)
    {
       
        return true;
    }
    else if (tablicaZakrytaB[y][x - 1] != '*' && tablicaZakrytaB[y + 1][x] != '*' && y - 1 < 0 && x + 1 >= granica)
    {
        
        return true;
    }
    else if (tablicaZakrytaB[y][x + 1] != '*' && tablicaZakrytaB[y - 1][x] != '*' && y + 1 >= granica && x - 1 < 0)
    {
        
        return true;
    }
}