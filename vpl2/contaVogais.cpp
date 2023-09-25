#include "contaVogais.hpp"
#include <iostream>
#include <string>

int vogais(std::string entrada){

    int total[5];
    std::string letras = "aeiou";

    for(int i = 0; i < entrada.length(); i++){

        switch (entrada[i])
        {
        case 'a':
            total[0]++;
            break;

        case 'e':
            total[1]++;
            break;

        case 'i':
            total[2]++;
            break;

        case 'o':
            total[3]++;
            break;

        case 'u':
            total[4]++;
            break;
        
        default:
            break;
        }

    }

    for (int i = 0; i < letras.length(); i++)
    {
        if (total[i] == 0)
            continue;
        else
            std::cout << std::endl << letras[i] << ":" << total[i] << std::endl;
        
    }
    
    return 0;
    
}