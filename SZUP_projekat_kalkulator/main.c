#include <stdio.h>
#include <stdlib.h>

float sabiranje (float x, float y) {
    return x+y;
}

float oduzimanje (float x, float y) {
    return x-y;
}

float mnozenje (float x, float y) {
    return x*y;
}

float deljenje (float x, float y) {
    return x/y;
}
int main()
{
    int izbor;
    float a, b, rezultat;
    printf("Unesite prvi broj\n");
    scanf("%f", &a);
    printf("Unesite drugi broj\n");
    scanf("%f", &b);
    printf("Odaberite operaciju\n1. Sabiranje\n2. Oduzimanje\n3. Mnozenje\n4. Deljenje\n");
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
    else {
        printf("Neispravan izbor\n");
    }
    return 0;
}
