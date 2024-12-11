#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, izbor, rezultat;
    printf("Unesite prvi broj\n");
    scanf("%d", &a);
    printf("Unesite drugi broj\n");
    scanf("%d", &b);
    printf("Odaberite operaciju\n1. Sabiranje\n2. Oduzimanje\n");
    scanf("%d", &izbor);
    if(izbor==1) {
        rezultat=a+b;
        printf("Rezultat sabiranja: %d\n", rezultat);
    }
    else if(izbor==2) {
        rezultat=a-b;
        printf("Rezultat oduzimanja: %d\n", rezultat);
    }
    else {
        printf("Neispravan izbor\n");
    }
    return 0;
}
