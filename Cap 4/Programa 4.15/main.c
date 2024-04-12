#include <stdio.h>
#include <stdlib.h>


int Productoria(int);

void main(void)
{
    int NUM;
    do
    {
        printf("Ingrese el numero del cual quieres practicar la productoria: ");
        scanf("%d", NUM);
    }
    while(NUM > 100 || NUM < 1);
    printf("La productoria de %d es: %d", NUM, Productoria(NUM));
}

int Productoria(int N)
{
    int I, PRO = 1;
    for(I = 1; I <= N; I++)
        PRO *= I;
    return (PRO);
}
