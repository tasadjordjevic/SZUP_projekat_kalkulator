#include "kalkulator.h"
#include <math.h>

float sabiranje(float x, float y) {
    return x + y;
}

float oduzimanje(float x, float y) {
    return x - y;
}

float mnozenje(float x, float y) {
    return x * y;
}

float deljenje(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        return 0; // Izbegava deljenje nulom
    }
}

float ostatak(int x, int y) {
    return x % y;
}

float anab(float x, float y) {
    return pow(x, y);
}

float bnaa(float x, float y) {
    return pow(y, x);
}

float koren(float x) {
    return sqrt(x);
}
