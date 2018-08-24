#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pNumero;
    int sNumero;
    int tNumero;
    int numero;
    int numeroMax;
    int numeroMin;
    int i;

    for (i=0;i<3;i++)
    {
        printf("\n Numero %d:" ,i+1);
        while(scanf("%d" , &numero[i]) != 1)
        {
            printf("\n Error reingrese numero %d:" , i+1);
            __fpurge(stind);
        }
        if (i==0)
        {
            numeroMin = numero[i];
            numeroMax = numero[i];
        }
        else if( numero[i] > numeroMax)
        {
            numeroMax = numero[i];
        }
        else if (numero[i] < numeroMin)
        {
            numeroMin = numero[i];
        }

    }



    /*
    printf("Ingrese el primer numero: ");
    /*scanf("%d",&pNumero);
    printf("%d",pNumero);

    while(scanf("%d",&pNumero) != 1)
    {
        printf("\n error - reingrese primer numero:");
        __fpurge(stdin);
    }
    numeroMax = pNumero;
    numeroMin = pNumero;


    printf("Ingrese el segundo numero: ");
    while(scanf("%d",&sNumero) != 1 )
    {
        printf("\n error - reingrese segundo numero:");
        __fpurge(stdin);
    }

    if (sNumero > numeroMax)
    {
        numeroMax = sNumero;
    }
    else if (sNumero < numeroMin)
    {
        numeroMin = sNumero;
    }



    printf("Ingrese el tercer numero: ");
    while(scanf("%d",&tNumero) != 1 )
    {
        printf("\n error - reingrese tercernumero:");
        __fpurge(stdin);
    }

    if (tNumero > numeroMax)
    {
        numeroMax = tNumero;
    }
    else if (tNumero < numeroMin)
    {
        numeroMin = tNumero;
    }

    printf("Max: %d  -  Min: %d", numeroMax, numeroMin);

        if(pNumero < numeroMax &&   pNumero > numeroMin);
        {
            printf("Es el del medio %d" , pNumero);
        }
        else if (sNumero < numeroMax && sNumero > numeroMin);
        {
            printf("Es el numero del medio %d" , sNumero);
        }
        else if (tNumero < numeroMax && tNumero > numeroMin);
        {
            printf("Es el numero del medio %d" , tNumero);
        }  */
    return 0;
}
