#include <iostream>
#include "mdc.hpp"

int main(){

    int m = 0, n = 0;
    
    std::cin >> m >> n;
    std::cout << std::endl << mdc(m, n) <<std::endl 
    << count_coprimes(m, n) << std::endl;

return 0;
}