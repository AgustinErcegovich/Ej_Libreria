#include "deco.h"
#include "MKL25Z4.h"

char leerPin(int pin){
    int valpin = PTE -> PDIR & (1 << pin);
    if(valpin == 0)
        return 'i';
    else if(valpin == 1)
        return 'a';
    }
void escribirPin(int pin, int est){
    PTE -> PSOR |= (est << pin);
}