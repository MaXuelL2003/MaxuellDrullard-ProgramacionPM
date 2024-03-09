#include <stdio.h>

/* Medidas.
El programa, al recibir datos como la longitud y el peso de un objeto
expresados en pies y libras, calcula los datos de este objeto pero en
metros y kilogramos, respectivamente

PIE, LIB, MET Y KIL: Variables de tiempo real. */

void main(void)
{
    float PIE, LIB, MET, KIL;
    printf("Ingerese los datos del objeto: ");
    scanf("%f %f", &PIE, &LIB);
    MET = PIE * 0.09290;
    KIL = LIB * 0.45359;
    printf("\nDatos del objeto \nLongitud: %5.2f \t Peso: %5.2f", MET, KIL);
}
