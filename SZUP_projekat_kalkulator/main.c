#include <stdio.h>
#include "kalkulator.h"

int main()
{
    int izbor;
    float a, b, rezultat;
    printf("Unesite prvi broj\n");
    scanf("%f", &a);
    printf("Unesite drugi broj\n");
    scanf("%f", &b);
    printf("Odaberite operaciju\n1. Sabiranje\n2. Oduzimanje\n3. Mnozenje\n4. Deljenje\n5. Ostatak pri deljenju\n6. a^b\n7. b^a\n8. Koren iz a\n9. Koren iz b\n");
    scanf("%d", &izbor);
    if(izbor==1) {
        rezultat=sabiranje(a,b);
        printf("Rezultat sabiranja: %f\n", rezultat);
    }
    else if(izbor==2) {
        rezultat=oduzimanje(a,b);
        printf("Rezultat oduzimanja: %f\n", rezultat);
    }
    else if(izbor==3) {
        rezultat=mnozenje(a,b);
        printf("Rezultat mnozenja: %f\n", rezultat);
    }
    else if(izbor==4) {
        rezultat=deljenje(a,b);
        printf("Rezultat deljenja: %f\n", rezultat);
    }
    else if(izbor==5) {
        rezultat=ostatak(a,b);
        printf("Ostatak pri deljenju: %d\n", (int)rezultat);
    }
    else if(izbor==6) {
        rezultat=anab(a,b);
        printf("a^b: %f\n", rezultat);
    }
    else if(izbor==7) {
        rezultat=bnaa(a,b);
        printf("b^a: %f\n", rezultat);
    }
    else if(izbor==8) {
        rezultat=koren(a);
        printf("Koren broja a: %f\n", rezultat);
    }
    else if(izbor==9) {
        rezultat=koren(b);
        printf("Koren broja b: %f\n", rezultat);
    }
    else {
        printf("Neispravan izbor\n");
    }
    return 0;
}
