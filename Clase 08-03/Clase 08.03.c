#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char n[50] = "Carlos Pichardo";
    n[49] = 'e';

    printf("\n %s \n", n);

    for(int i = 0; i<50;i++)
    {
        printf("\nn[%d]= %c", i, n[i]);
    }

    for(int i = 0; i<50; i++)
    {
        printf("\nn[%d]= %d", i, (int)n[1]);
    }
    return 0;
}
