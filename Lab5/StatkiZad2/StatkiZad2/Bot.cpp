#include "Bot.h"

void Bot::DodajStatkiBot()
{
	srand(time(NULL));
	while (true)
	{
		statek2 = random(0, 20);
		std::cout << "Ilosc statkow o rozmiarze 2 wybranych przez BOTA: "<< statek2 << std::endl;
		statek3 = random(0, 20);
		std::cout << "Ilosc statkow o rozmiarze 3 wybranych przez BOTA: " << statek3 << std::endl;
		statek4 = random(0, 20);
		std::cout << "Ilosc statkow o rozmiarze 4 wybranych przez BOTA: " << statek4 << std::endl;
		statek5 = random(0, 20);
		std::cout << "Ilosc statkow o rozmiarze 5 wybranych przez BOTA: " << statek5 << std::endl;
		iloscPolStatkow = statek2 * 2 + statek3 * 3 + statek4 * 4 + statek5 * 5;
		std::cout << std::endl;
		if (iloscPolStatkow > (granica * granica) * 0.3)
		{
			system("CLS");
			std::cout << "Za duza ilosc statkow - Bot musi wybrac jeszcze raz!!! \n" << std::endl;
			std::cout << "Kliknij dowolny przycisk aby ponowic probe!!! \n" << std::endl;
			system("pause");
			iloscPolStatkow = 0;
		}
		else
		{
			std::cout << "Kliknij dowolny przycisk aby przejsc dalej!!! \n" << std::endl;
			system("pause");
			break;
		}
	}

	DodawanieAuto(statek2, statek3, statek4, statek5, tablica, tablicaZakryta);
}