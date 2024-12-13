#include <stdio.h>
#include "kalkulator.h"

int main() {
    int izbor;
    float a, b, rezultat;
    printf("Unesite prvi broj\n");
    scanf("%f", &a);
    printf("Unesite drugi broj\n");
    scanf("%f", &b);
    printf("Odaberite operaciju\n1. Sabiranje\n2. Oduzimanje\n3. Mnozenje\n4. Deljenje\n5. Ostatak pri deljenju\n6. a^b\n7. b^a\n8. Koren iz a\n9. Koren iz b\n");
    scanf("%d", &izbor);
    switch (izbor) {
        case 1: rezultat = sabiranje(a, b); printf("Rezultat sabiranja: %.2f\n", rezultat); break;
        case 2: rezultat = oduzimanje(a, b); printf("Rezultat oduzimanja: %.2f\n", rezultat); break;
        case 3: rezultat = mnozenje(a, b); printf("Rezultat mnozenja: %.2f\n", rezultat); break;
        case 4:
            if (b != 0) { rezultat = deljenje(a, b); printf("Rezultat deljenja: %.2f\n", rezultat); }
            else { printf("Greska: Deljenje nulom nije dozvoljeno.\n"); }
            break;
        case 5: rezultat = ostatak((int)a, (int)b); printf("Ostatak pri deljenju: %d\n", (int)rezultat); break;
        case 6: rezultat = anab(a, b); printf("a^b: %.2f\n", rezultat); break;
        case 7: rezultat = bnaa(a, b); printf("b^a: %.2f\n", rezultat); break;
        case 8: rezultat = koren(a); printf("Koren broja a: %.2f\n", rezultat); break;
        case 9: rezultat = koren(b); printf("Koren broja b: %.2f\n", rezultat); break;
        default: printf("Neispravan izbor\n"); break;
    }
    return 0;
}
