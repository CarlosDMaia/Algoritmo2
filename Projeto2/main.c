#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gmercurio = 0.38;
    float gvenus = 0.91;
    float gterra = 1;
    float gmarte = 0.38;
    float gjupiter = 2.34;
    float gsaturno = 1.06;
    float gurano = 0.92;
    float gneturno = 1.19;
    float gplutao = 0.06;
    /////////
    printf("1 mercurio\n");
    printf("2 venus\n");
    printf("3 terra\n");
    printf("4 marte\n");
    printf("5 jupiter\n");
    printf("6 saturno\n");
    printf("7 urano\n");
    printf("8 neturno\n");
    printf("9 plutao\n");
    ////////
    int planeta;
    scanf ("%d", &planeta);
    float peso;
    int massa;
    scanf("%d", &massa);
    peso = massa * gmercurio;
    printf("Seu peso é %f", peso);
    return 0;
}
