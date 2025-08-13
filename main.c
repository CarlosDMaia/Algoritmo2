#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int Numero1, NumeroN, Maior, Menor;
    scanf ("%d", &Numero1);
    Maior = Numero1;
    Menor = Numero1;
    for(i=1; i<5; i++){
        scanf ("%d", &NumeroN);
        if (NumeroN > Maior){
            Maior = NumeroN;
        }

        if (NumeroN < Menor)
            Menor = NumeroN;
    }

    printf ("Numero Maior %d\n", Maior);
    printf ("Numero Menor %d\n", Menor);

    return 0;
}
