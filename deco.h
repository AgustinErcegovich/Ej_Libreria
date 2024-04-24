/* Sintetizando:
a) Deberán crear una librería en la que contenga las funciones necesarias
para el control independiente de cada led. Cada funcion de encendido o 
apagado, deberá funcionar de la siguiente manera: Si dentro de la funcion 
se encuentra un ‘1’ se debera prender el led correspondiente, mientras que 
si hay un ‘0’ se deberá apagar. Se ingresará por función el pin y el estado.*/

#ifndef DECO_H
#define DECO_H

char leerPin(int pin);
void escribirPin(int pin, int est);

#endif
