#include "mdc.hpp"


unsigned mdc(unsigned m, unsigned n) {
    
    unsigned resto;

    do
    {
        resto = m % n;
        m = n;
        n = resto;
    } while (resto != 0);
    
    
    
  return m;
}

unsigned count_coprimes(unsigned m, unsigned n) {
    
    int coprimos = 0;
    
    for(int i = m; i <= n; i++){
        
        if(mdc(i,n) == 1)
            coprimos++;
        else
            continue;
        
    }
    
  return coprimos;
}