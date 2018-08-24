#include <stdio.h>
#include <stdlib.h>

#define LIMITE_ARRAY 5
int main()
{
    int numero[LIMITE_ARRAY];
    float promedio=0;
    int i;

    for (i=0;i<LIMITE_ARRAY;i++)
    {
        printf("\n Ingrese numero %d: ", i+1);
        while(scanf("%d", &numero[i]) != 1)
        {
            printf("\n Reingrese numero %d: ");
            __fpurge(stdin);
        }
        promedio = promedio + numero[i];
    }

    printf("El promedio es %f",promedio / LIMITE_ARRAY);

        return 0;
}
