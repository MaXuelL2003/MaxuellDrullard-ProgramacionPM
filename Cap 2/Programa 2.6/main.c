#include <stdio.h>

/* Incremento de salario
El programa, al recibir como dato el salario de un profesor, incrementa su
salario en funcion de la tabla 2.3.

NIV: Variables de tipo entero.
SAL: Variables de tipo real. */

void main(void)
{
    float SAL;
    int NIV;
    printf("Ingrese nivel academico del profesor: ");
    scanf("%d", &NIV);
    printf("Ingrese el salario: ");
    scanf("%f", &SAL);
    switch(NIV)
    printf("Ingrese el salario: ");
    scanf("%f", &SAL);
    switch(NIV)
    {
        case 1: SAL = SAL * 1.0035; break;
        case 2: SAL = SAL * 1.0041; break;
        case 3: SAL = SAL * 1.0048; break;
        case 4: SAL = SAL * 1.0053; break;
    }
    printf("\n\nNivel: %d \tNuevo Salario: %8.2f", NIV, SAL);
}
