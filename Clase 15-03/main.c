#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    char* ptr;
    char cad[20];

    ptr = &cad[0];

    printf("\nIngresa cadena: ");
    gets(ptr);
    puts(ptr);

    ptr(ptr);
    puts(ptr);

    return;
}
