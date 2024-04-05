#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad = 0;

               printf("\nCual es tu edad?");
    scanf("%d",&edad);

    if(edad > 0 && edad < 130)
    {
        if(edad < 18)
        {
            printf("\nEres menor de edad.\n");
        }
        else
        {
            printf("\nEres mayor de edad\n");
        }
    }
    else
    {
        printf("\nJABLADOL\n");
    }return 0;
}
