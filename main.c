#include "MKL25Z4.h"
#include "deco.h"
int main () {
    SIM -> SCGC5 |= SIM_SCGC5_PORTE_MASK;
    for (int i=0;i<4;i++) {
        PORTE -> PCR[i] |= PORT_PCR_MUX(1);
    }
    PORTE -> PCR[4] |= PORT_PCR_MUX(0);
    PORTE -> PCR[5] |= PORT_PCR_MUX(0);
    while (1) {
        if (leerPin(4)=='i' && leerPin(5)=='i') {
                escribirPin(0, 1);
                escribirPin(1, 0);
                escribirPin(2, 0);
                escribirPin(3, 0);
            } else if (leerPin(4)=='a' && leerPin(5)=='i') {
                escribirPin(0, 0);
                escribirPin(1, 1);
                escribirPin(2, 0);
                escribirPin(3, 0);
            } else if (leerPin(4)=='i' && leerPin(5)=='a') {
                escribirPin(0, 0);
                escribirPin(1, 0);
                escribirPin(2, 1);
                escribirPin(3, 0);
            } else if (leerPin(4)=='a' && leerPin(5)=='a') {
                escribirPin(0, 0);
                escribirPin(1, 0);
                escribirPin(2, 0);
                escribirPin(3, 1);
            }
    }
}