#include <stdio.h>

int main() {
    float rayon, aire, perimetre, pi;
    pi = 3.142857;
    //rayon = 4;
    printf("Saisissez le rayon : ");
    fflush(stdout);
    scanf("%f", &rayon);

    aire = (pi * (rayon*rayon));
    perimetre = (pi * 2 * rayon);
    printf("Aire :%f \nPerimetre :%f \n", aire, perimetre);
    return 0;
}