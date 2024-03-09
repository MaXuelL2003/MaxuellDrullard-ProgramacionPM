#include <stdio.h>
#include <math.h>

/*Expresion
El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresion determinada.

R, T y Q: Variables de tipo entero.
RES: Variable de tipo real. */

void main(void)
{
    float RES;
    int R, T , Q;
    printf("\nIngrese valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);
    RES = pow(R, 4) - pow(T, 3) + pow(Q, 2);
    if(RES < 820)
        printf("\nR = %d\t T = %d\t Q = %d", R, T, Q);
}
