#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main ()
{
    int vector [tam], vectordestino[tam], i;
    printf("\n Vector de 10 posisciones");

    for (i=0; i<10; i++)
    {
        printf("\n Vector numero [%d]=",i);
        scanf("%d",&vector[i]);
    }

    for (i=0; i<tam; i++)
    {
        vectordestino[i] = vector[tam-1-i];
    }

    for(i=0;i<tam;i++){
        printf("\nEl valor del vectordestino en la posicion %d es %d", i, vectordestino[i]);
    }

    system ("pause");
    return 0;
}
