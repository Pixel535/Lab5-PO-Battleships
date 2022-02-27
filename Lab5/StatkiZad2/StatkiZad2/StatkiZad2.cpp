// StatkiZad2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <stdlib.h>
#include "gra.h"
#include "graBB.h"
#include "graPB.h"

int main()
{

    int komenda;
    gra pvp;
    graBB cpuVScpu;
    graPB pVScpu;
    std::cout << "GRA W STATKI!!!!" << std::endl;
    std::cout << "MENU GLOWNE" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    system("pause");
    system("CLS");

    while (true)
    {
        std::cout << "Wybierz tryb gry: " << std::endl;
        std::cout << "---------------------------------------" << std::endl;
        std::cout << "[0] WYJSCIE Z GRY" << std::endl;
        std::cout << "[1] PVP" << std::endl;
        std::cout << "[2] P vs PC" << std::endl;
        std::cout << "[3] PC vs PC" << std::endl;
        std::cout << "Wybor: " << std::endl;
        std::cin >> komenda;
        switch (komenda)
        {
        case 0:
            return 0;
        case 1:
            system("CLS");
            pvp.rozgrywka();
            break;
        case 2:
            system("CLS");
            pVScpu.rozgrywka();
            break;
        case 3:
            system("CLS");
            cpuVScpu.rozgrywka();
            break;
        }
    }
    
}

