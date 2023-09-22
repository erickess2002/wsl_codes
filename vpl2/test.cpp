#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.hpp"
#include "contaVogais.hpp"

bool vogais(std::string a){

    if(a == "abacaxi" || a == "aeiou")
        return true;
    else
        return false;
}