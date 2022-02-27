#pragma once
#include "gracz.h"
#include <iostream>
#include <stdlib.h>
class gra :public gracz
{
public:
	void Fazagry(char tablicaG2[granica][granica], char tablicaZakrytaG1[granica][granica], int iloscPolStatkowG2, char tablicaG1[granica][granica], char tablicaZakrytaG2[granica][granica], int iloscPolStatkowG1, int G1statek2, int G1statek3, int G1statek4, int G1statek5, int G2statek2, int G2statek3, int G2statek4, int G2statek5);
	void WarunkinaO(int x, int y, char tablica[granica][granica], char tablicaZakryta[granica][granica]);
	bool CzyZatopiony(int x, int y, char tablica[granica][granica], char tablicaZakryta[granica][granica]);
};

