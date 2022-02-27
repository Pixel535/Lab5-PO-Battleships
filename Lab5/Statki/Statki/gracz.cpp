#include "gracz.h"
#include <iostream>
#include <stdlib.h>

int gracz::random(int min, int max)
{
	return (rand() % (max - min + 1) + min);
}

void gracz::DodajStatki()
{
    while (true)
    {

        std::cout << "Wybierz ilosc statkow o rozmiarze [2] : " << std::endl;
        std::cin >> statek2;
        pole2 = statek2 * 2;
        std::cout << "Wybierz ilosc statkow o rozmiarze [3] : " << std::endl;
        std::cin >> statek3;
        pole3 = statek3 * 3;
        std::cout << "Wybierz ilosc statkow o rozmiarze [4] : " << std::endl;
        std::cin >> statek4;
        pole4 = statek4 * 4;
        std::cout << "Wybierz ilosc statkow o rozmiarze [5] : " << std::endl;
        std::cin >> statek5;
        pole5 = statek5 * 5;
        iloscPolStatkow = statek2 * 2 + statek3 * 3 + statek4 * 4 + statek5 * 5;
        std::cout << std::endl;
        if (iloscPolStatkow > (granica*granica) * 0.3)
        {
            system("CLS");
            std::cout << "Za duza ilosc statkow - [Ilosc pol zajmowanych przez statni nie moze przekraczac 30% pol planszy]!!! \n" << std::endl;
            iloscPolStatkow = 0;
        }
        else
        {
            break;
        }

    }
    std::cout << "Czy chcesz zeby komputer dodal automatycznie te statki ?: [T] [N]" << std::endl;
    std::cin >> wybor;

    if (wybor == 'T' || wybor == 't')
    {
        DodawanieAuto(statek2, statek3, statek4, statek5, tablica, tablicaZakryta);
    }
    else if (wybor == 'N' || wybor == 'n')
    {
        DodawanieReczneStatkow(statek2, statek3, statek4, statek5, tablica, tablicaZakryta);
    }
}

void gracz::DodawanieAuto(int statek2, int statek3, int statek4, int statek5, char tablica[granica][granica], char tablicaZakryta[granica][granica])
{
    system("CLS");
    srand(time(NULL));
    WypelnijTablice(tablica, tablicaZakryta);
    int i = 0;
    while (i != statek5)
    {
        int x = random(0, 29);
        int y = random(0, 29);
        if (Warunki(tablica, x, y) == false)
        {

        }
        else
        {
            int orientacja = random(1, 2);
            if (orientacja == 1)//V
            {
                int gd = random(1, 2);

                if (gd == 1)//W gore
                {
                    int j = y - 4;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '5';
                            tablica[j][x] = '5';
                            j++;
                        }
                        i++;
                    }
                }
                else if (gd == 2)//W dol
                {
                    int j = y + 4;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '5';
                            tablica[j][x] = '5';
                            j--;
                        }
                        i++;
                    }
                }
            }
            else if (orientacja == 2)//H
            {
                int lp = random(1, 2);
                if (lp == 1)//W lewo
                {
                    int j = x - 4;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '5';
                            tablica[y][j] = '5';
                            j++;
                        }
                        i++;
                    }
                }
                else if (lp == 2)//W prawo
                {
                    int j = x + 4;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '5';
                            tablica[y][j] = '5';
                            j--;
                        }
                        i++;
                    }
                }
            }
        }
    }////
    i = 0;
    while (i != statek4)
    {
        int x = random(0, 29);
        int y = random(0, 29);
        if (Warunki(tablica, x, y) == false)
        {

        }
        else
        {
            int orientacja = random(1, 2);
            if (orientacja == 1)//V
            {
                int gd = random(1, 2);

                if (gd == 1)//W gore
                {
                    int j = y - 3;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '4';
                            tablica[j][x] = '4';
                            j++;
                        }
                        i++;
                    }
                }
                else if (gd == 2)//W dol
                {
                    int j = y + 3;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '4';
                            tablica[j][x] = '4';
                            j--;
                        }
                        i++;
                    }
                }
            }
            else if (orientacja == 2)//H
            {
                int lp = random(1, 2);
                if (lp == 1)//W lewo
                {
                    int j = x - 3;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '4';
                            tablica[y][j] = '4';
                            j++;
                        }
                        i++;
                    }
                }
                else if (lp == 2)//W prawo
                {
                    int j = x + 3;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '4';
                            tablica[y][j] = '4';
                            j--;
                        }
                        i++;
                    }
                }
            }
        }
    }////
    i = 0;
    while (i != statek3)
    {
        int x = random(0, 29);
        int y = random(0, 29);
        if (Warunki(tablica, x, y) == false)
        {

        }
        else
        {
            int orientacja = random(1, 2);
            if (orientacja == 1)//V
            {
                int gd = random(1, 2);

                if (gd == 1)//W gore
                {
                    int j = y - 2;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '3';
                            tablica[j][x] = '3';
                            j++;
                        }
                        i++;
                    }
                }
                else if (gd == 2)//W dol
                {
                    int j = y + 2;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '3';
                            tablica[j][x] = '3';
                            j--;
                        }
                        i++;
                    }
                }
            }
            else if (orientacja == 2)//H
            {
                int lp = random(1, 2);
                if (lp == 1)//W lewo
                {
                    int j = x - 2;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '3';
                            tablica[y][j] = '3';
                            j++;
                        }
                        i++;
                    }
                }
                else if (lp == 2)//W prawo
                {
                    int j = x + 2;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '3';
                            tablica[y][j] = '3';
                            j--;
                        }
                        i++;
                    }
                }
            }
        }
    }////
    i = 0;
    while (i != statek2)
    {
        int x = random(0, 29);
        int y = random(0, 29);
        if (Warunki(tablica, x, y) == false)
        {

        }
        else
        {
            int orientacja = random(1, 2);
            if (orientacja == 1)//V
            {
                int gd = random(1, 2);

                if (gd == 1)//W gore
                {
                    int j = y - 1;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '2';
                            tablica[j][x] = '2';
                            j++;
                        }
                        i++;
                    }
                }
                else if (gd == 2)//W dol
                {
                    int j = y + 1;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '2';
                            tablica[j][x] = '2';
                            j--;
                        }
                        i++;
                    }
                }
            }
            else if (orientacja == 2)//H
            {
                int lp = random(1, 2);
                if (lp == 1)//W lewo
                {
                    int j = x - 1;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '2';
                            tablica[y][j] = '2';
                            j++;
                        }
                        i++;
                    }
                }
                else if (lp == 2)//W prawo
                {
                    int j = x + 1;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {

                    }
                    else
                    {
                        while (j != x)
                        {
                            tablica[y][x] = '2';
                            tablica[y][j] = '2';
                            j--;
                        }
                        i++;
                    }
                }
            }
        }
    }////
}

void gracz::DodawanieReczneStatkow(int statek2, int statek3, int statek4, int statek5, char tablica[granica][granica], char tablicaZakryta[granica][granica])
{
    system("CLS");
    char orientacja;
    int x, y;
    int i = 0;
    WypelnijTablice(tablica, tablicaZakryta);
    while (i != statek2)
    {
        WypiszTablice(tablica);
        std::cout << "Podaj pole w ktorym chcesz umiescic statek o rozmiarze [2] w postaci [x] x [y]: " << std::endl;
        std::cout << "[x]: " << std::endl;
        std::cin >> x;
        std::cout << "[y]: " << std::endl;
        std::cin >> y;
        if (Warunki(tablica, x, y) == false)
        {
            std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
            std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
            system("pause");
            system("CLS");
        }
        else
        {
            std::cout << "Podaj orientacje statku [V] || [H]: " << std::endl;
            std::cin >> orientacja;
            if (orientacja == 'V' || orientacja == 'v')
            {
                int gd;
                std::cout << "Podaj w ktora strone ma isc statek [1] - gora, [2] - dol: " << std::endl;
                std::cin >> gd;
                if (gd == 1)
                {
                    int j = y - 1;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '2';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '2';
                            j++;
                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (gd == 2)
                {

                    int j = y + 1;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {
                        WarunkiJY(tablica, x, j, y);
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '2';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '2';
                            j--;
                        }
                        system("CLS");
                        i++;
                    }
                }
            }
            else if (orientacja == 'H' || orientacja == 'h')
            {
                int lp;
                std::cout << "Podaj w ktora strone ma isc statek [1] - lewo, [2] - prawo: " << std::endl;
                std::cin >> lp;
                if (lp == 1)
                {
                    int j = x - 1;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '2';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '2';
                            j++;

                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (lp == 2)
                {
                    int j = x + 1;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '2';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '2';
                            j--;

                        }
                        system("CLS");
                        i++;
                    }
                }
            }
        }
    }//////
    i = 0;
    while (i != statek3)
    {
        WypiszTablice(tablica);
        std::cout << "Podaj pole w ktorym chcesz umiescic statek o rozmiarze [3] w postaci [x] x [y]: " << std::endl;
        std::cout << "[x]: " << std::endl;
        std::cin >> x;
        std::cout << "[y]: " << std::endl;
        std::cin >> y;
        if (Warunki(tablica, x, y) == false)
        {
            std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
            std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
            system("pause");
            system("CLS");
        }
        else
        {
            std::cout << "Podaj orientacje statku [V] || [H]: " << std::endl;
            std::cin >> orientacja;
            if (orientacja == 'V' || orientacja == 'v')
            {
                int gd;
                std::cout << "Podaj w ktora strone ma isc statek [1] - gora, [2] - dol: " << std::endl;
                std::cin >> gd;
                if (gd == 1)
                {
                    int j = y - 2;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '3';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '3';
                            j++;
                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (gd == 2)
                {

                    int j = y + 2;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {
                        WarunkiJY(tablica, x, j, y);
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '3';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '3';
                            j--;
                        }
                        system("CLS");
                        i++;
                    }
                }
            }
            else if (orientacja == 'H' || orientacja == 'h')
            {
                int lp;
                std::cout << "Podaj w ktora strone ma isc statek [1] - lewo, [2] - prawo: " << std::endl;
                std::cin >> lp;
                if (lp == 1)
                {
                    int j = x - 2;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '3';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '3';
                            j++;

                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (lp == 2)
                {
                    int j = x + 2;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '3';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '3';
                            j--;

                        }
                        system("CLS");
                        i++;
                    }
                }
            }
        }
    }//////
    i = 0;
    while (i != statek4)
    {
        WypiszTablice(tablica);
        std::cout << "Podaj pole w ktorym chcesz umiescic statek o rozmiarze [4] w postaci [x] x [y]: " << std::endl;
        std::cout << "[x]: " << std::endl;
        std::cin >> x;
        std::cout << "[y]: " << std::endl;
        std::cin >> y;
        if (Warunki(tablica, x, y) == false)
        {
            std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
            std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
            system("pause");
            system("CLS");
        }
        else
        {
            std::cout << "Podaj orientacje statku [V] || [H]: " << std::endl;
            std::cin >> orientacja;
            if (orientacja == 'V' || orientacja == 'v')
            {
                int gd;
                std::cout << "Podaj w ktora strone ma isc statek [1] - gora, [2] - dol: " << std::endl;
                std::cin >> gd;
                if (gd == 1)
                {
                    int j = y - 3;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '4';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '4';
                            j++;
                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (gd == 2)
                {

                    int j = y + 3;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {
                        WarunkiJY(tablica, x, j, y);
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '4';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '4';
                            j--;
                        }
                        system("CLS");
                        i++;
                    }
                }
            }
            else if (orientacja == 'H' || orientacja == 'h')
            {
                int lp;
                std::cout << "Podaj w ktora strone ma isc statek [1] - lewo, [2] - prawo: " << std::endl;
                std::cin >> lp;
                if (lp == 1)
                {
                    int j = x - 3;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '4';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '4';
                            j++;

                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (lp == 2)
                {
                    int j = x + 3;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '4';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '4';
                            j--;

                        }
                        system("CLS");
                        i++;
                    }
                }
            }
        }
    }//////
    i = 0;
    while (i != statek5)
    {
        WypiszTablice(tablica);
        std::cout << "Podaj pole w ktorym chcesz umiescic statek o rozmiarze [5] w postaci [x] x [y]: " << std::endl;
        std::cout << "[x]: " << std::endl;
        std::cin >> x;
        std::cout << "[y]: " << std::endl;
        std::cin >> y;
        if (Warunki(tablica, x, y) == false)
        {
            std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
            std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
            system("pause");
            system("CLS");
        }
        else
        {
            std::cout << "Podaj orientacje statku [V] || [H]: " << std::endl;
            std::cin >> orientacja;
            if (orientacja == 'V' || orientacja == 'v')
            {
                int gd;
                std::cout << "Podaj w ktora strone ma isc statek [1] - gora, [2] - dol: " << std::endl;
                std::cin >> gd;
                if (gd == 1)
                {
                    int j = y - 4;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {

                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '5';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '5';
                            j++;
                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (gd == 2)
                {

                    int j = y + 4;
                    if (WarunkiJY(tablica, x, j, y) == false)
                    {
                        WarunkiJY(tablica, x, j, y);
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != y)
                        {
                            tablica[y][x] = '5';// usuwam if else gdzie byly warunkipion
                            tablica[j][x] = '5';
                            j--;
                        }
                        system("CLS");
                        i++;
                    }
                }
            }
            else if (orientacja == 'H' || orientacja == 'h')
            {
                int lp;
                std::cout << "Podaj w ktora strone ma isc statek [1] - lewo, [2] - prawo: " << std::endl;
                std::cin >> lp;
                if (lp == 1)
                {
                    int j = x - 4;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '5';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '5';
                            j++;

                        }
                        system("CLS");
                        i++;
                    }
                }
                else if (lp == 2)
                {
                    int j = x + 4;
                    if (WarunkiJX(tablica, x, j, y) == false)
                    {
                        std::cout << "Nie mozesz postawic tutaj statku!!!" << std::endl;
                        std::cout << "Kliknij dowolny przycisk aby wpisac ponownie poprawna wartosc!!!" << std::endl;
                        system("pause");
                        system("CLS");
                    }
                    else
                    {
                        while (j != x)
                        {

                            tablica[y][x] = '5';// usuwam if else gdzie byly warunkipoziom
                            tablica[y][j] = '5';
                            j--;

                        }
                        system("CLS");
                        i++;
                    }
                }
            }
        }
    }//////
}

void gracz::WypiszTablice(char tablica[granica][granica])
{
    for (int i = 0; i < granica; i++)
    {
        for (int j = 0; j < granica; j++)
        {
            std::cout << " " << tablica[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void gracz::WypiszTabliceZakryta(char tablicaZakryta[granica][granica])
{
    for (int i = 0; i < granica; i++)
    {
        for (int j = 0; j < granica; j++)
        {
            std::cout << " " << tablicaZakryta[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
}

void gracz::WypelnijTablice(char tablica[granica][granica], char tablicaZakryta[granica][granica])
{
    for (int i = 0; i < granica; i++)
    {
        for (int j = 0; j < granica; j++)
        {
            tablica[i][j] = '*';
            tablicaZakryta[i][j] = '*';
        }
    }
}

bool gracz::WarunkiJY(char tablica[granica][granica], int x, int j, int y)
{
    if (j < y)
    {
        while (j != y)
        {
            if (j < 0)
            {
                return false;
            }
            else if (j > granica - 1)
            {
                return false;
            }
            else if (tablica[j - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[j + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[j][x] != '*')
            {
                return false;
            }
            else if (x > granica - 1 || j > granica - 1)
            {
                return false;
            }
            else if (x < 0 || j < 0)
            {
                return false;
            }
            else if (x != 0 && j != 0)
            {
                if (x != granica - 1 && j != granica - 1)
                {
                    if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x == granica - 1 && j == granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x == granica - 1 && j != granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x != granica - 1 && j == granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (x == 0 && j == 0)
            {
                if (tablica[j + 1][x] != '*')
                {
                    return false;
                }
                else if (tablica[j + 1][x + 1] != '*')
                {
                    return false;
                }
                else if (tablica[j][x + 1] != '*')
                {
                    return false;
                }
            }
            else if (x == 0 && j != 0)
            {
                if (j != granica - 1)
                {
                    if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (j == 0 && x != 0)
            {
                if (x != granica - 1)
                {
                    if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x == granica - 1)
                {
                    if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else
            {

                return true;
            }
            j++;
        }
    }
    else if (j > y)
    {
        while (j != y)
        {
            if (j < 0)
            {
                return false;
            }
            else if (j > granica - 1)
            {
                return false;
            }
            else if (tablica[j - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[j + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[j][x] != '*')
            {
                return false;
            }
            else if (x > granica - 1 || j > granica - 1)
            {
                return false;
            }
            else if (x < 0 || j < 0)
            {
                return false;
            }
            else if (x != 0 && j != 0)
            {
                if (x != granica - 1 && j != granica - 1)
                {
                    if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x == granica - 1 && j == granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x == granica - 1 && j != granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x != granica - 1 && j == granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (x == 0 && j == 0)
            {
                if (tablica[j + 1][x] != '*')
                {
                    return false;
                }
                else if (tablica[j + 1][x + 1] != '*')
                {
                    return false;
                }
                else if (tablica[j][x + 1] != '*')
                {
                    return false;
                }
            }
            else if (x == 0 && j != 0)
            {
                if (j != granica - 1)
                {
                    if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1)
                {
                    if (tablica[j - 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j - 1][x + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (j == 0 && x != 0)
            {
                if (x != granica - 1)
                {
                    if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (x == granica - 1)
                {
                    if (tablica[j + 1][x] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j][x - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[j + 1][x - 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else
            {
                return true;
            }
            j--;
            if (j == y)
            {
                return true;
            }
        }
    }
}

bool gracz::WarunkiJX(char tablica[granica][granica], int x, int j, int y)
{
    if (j < x)
    {
        while (j != x)
        {
            if (j < 0)
            {
                return false;
            }
            else if (j > granica - 1)
            {
                return false;
            }
            else if (tablica[y][j - 1] != '*')
            {
                return false;
            }
            else if (tablica[y][j + 1] != '*')
            {
                return false;
            }
            else if (tablica[y][j] != '*')
            {
                return false;
            }
            else if (j > granica - 1 || y > granica - 1)
            {
                return false;
            }
            else if (j < 0 || y < 0)
            {
                return false;
            }
            else if (j != 0 && y != 0)
            {
                if (j != granica - 1 && y != granica - 1)
                {
                    if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1 && y == granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1 && y != granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j != granica - 1 && y == granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (j == 0 && y == 0)
            {
                if (tablica[y + 1][j] != '*')
                {
                    return false;
                }
                else if (tablica[y + 1][j + 1] != '*')
                {
                    return false;
                }
                else if (tablica[y][j + 1] != '*')
                {
                    return false;
                }
            }
            else if (j == 0 && y != 0)
            {
                if (y != granica - 1)
                {
                    if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (y == granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (y == 0 && j != 0)
            {
                if (j != granica - 1)
                {
                    if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1)
                {
                    if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else
            {

                return true;
            }
            j++;
        }
    }
    else
    {
        while (j != x)
        {
            if (j < 0)
            {
                return false;
            }
            else if (j > granica - 1)
            {
                return false;
            }
            else if (tablica[y][j - 1] != '*')
            {
                return false;
            }
            else if (tablica[y][j + 1] != '*')
            {
                return false;
            }
            else if (tablica[y][j] != '*')
            {
                return false;
            }
            else if (j > granica - 1 || y > granica - 1)
            {
                return false;
            }
            else if (j < 0 || y < 0)
            {
                return false;
            }
            else if (j != 0 && y != 0)
            {
                if (j != granica - 1 && y != granica - 1)
                {
                    if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1 && y == granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1 && y != granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j != granica - 1 && y == granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (j == 0 && y == 0)
            {
                if (tablica[y + 1][j] != '*')
                {
                    return false;
                }
                else if (tablica[y + 1][j + 1] != '*')
                {
                    return false;
                }
                else if (tablica[y][j + 1] != '*')
                {
                    return false;
                }
            }
            else if (j == 0 && y != 0)
            {
                if (y != granica - 1)
                {
                    if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                }
                else if (y == granica - 1)
                {
                    if (tablica[y - 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y - 1][j + 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else if (y == 0 && j != 0)
            {
                if (j != granica - 1)
                {
                    if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j + 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
                else if (j == granica - 1)
                {
                    if (tablica[y + 1][j] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y][j - 1] != '*')
                    {
                        return false;
                    }
                    else if (tablica[y + 1][j - 1] != '*')
                    {
                        return false;
                    }
                }
            }
            else
            {

                return true;
            }
            j--;
            if (j == x)
            {
                return true;
            }
        }
    }
}

bool gracz::Warunki(char tablica[granica][granica], int x, int y)
{
    if (tablica[y][x] != '*')
    {
        return false;
    }
    else if (x > granica - 1 || y > granica - 1)
    {
        return false;
    }
    else if (x < 0 || y < 0)
    {
        return false;
    }
    else if (x != 0 && y != 0)
    {
        if (x != granica - 1 && y != granica - 1)
        {
            if (tablica[y + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x + 1] != '*')
            {
                return false;
            }
        }
        else if (x == granica - 1 && y == granica - 1)
        {
            if (tablica[y - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x - 1] != '*')
            {
                return false;
            }
        }
        else if (x == granica - 1 && y != granica - 1)
        {
            if (tablica[y - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x - 1] != '*')
            {
                return false;
            }
        }
        else if (x != granica - 1 && y == granica - 1)
        {
            if (tablica[y - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y][x + 1] != '*')
            {
                return false;
            }
        }
    }
    else if (x == 0 && y != 0)
    {
        if (y != granica - 1)
        {
            if (tablica[y + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x + 1] != '*')
            {
                return false;
            }
        }
        else if (y == granica - 1)
        {
            if (tablica[y - 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y - 1][x + 1] != '*')
            {
                return false;
            }
        }
    }
    else if (y == 0 && x != 0)
    {
        if (x != granica - 1)
        {
            if (tablica[y + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x + 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x - 1] != '*')
            {
                return false;
            }
        }
        else if (x == granica - 1)
        {
            if (tablica[y + 1][x] != '*')
            {
                return false;
            }
            else if (tablica[y][x - 1] != '*')
            {
                return false;
            }
            else if (tablica[y + 1][x - 1] != '*')
            {
                return false;
            }
        }
    }
    else if (x == 0 && y == 0)
    {
        if (tablica[y + 1][x] != '*')
        {
            return false;
        }
        else if (tablica[y + 1][x + 1] != '*')
        {
            return false;
        }
        else if (tablica[y][x + 1] != '*')
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}
