#include <stdio.h>

int main() {
    int i;
    printf("\n");
    printf("\n");

    printf("Nombre entre 1 et 1000 divisble par 2 et 15 :\n");
    for(i=1; i<=1000; i++)
    {
        if((i%2==0) & (i%15==0)) {
            printf("%d,  ",i);
        }
    }
    printf("\n");
    printf("\n");

    printf("Nombre entre 1 et 1000 divisible par 103 ou 107 :\n");
    for(i=1; i<=1000; i++)
    {
        if((i%103==0) | (i%107==0)) {
            printf("%d,  ",i);
        }
    }
    printf("\n");
    printf("\n");

        printf("Nombre entre 1 et 1000 divisible par 7 ou 5, mais pas par 3 :\n");
    for(i=1; i<=1000; i++)
    {
        if((i%7==0) | (i%5==0) & (i%3!=0)) {
            printf("%d,  ",i);
        }
    }
    printf("\n");
    printf("\n");
    
    printf("\n");

    return 0;
}