#include <stdio.h>

int main(){
    int type;
    printf("Saisissez le type : \n1=char \t2=short \t3=int \t4=long int \n5=long long int \t6=float \t7=double \t8=long double\n");
    fflush(stdout);
    scanf("%i", &type);

    switch (type)
    {
    case 1 :
        printf("La taille d'un char signed est de : %li octet, et celle d'un unsigned : %li octet\n", sizeof(signed char), sizeof(unsigned char));
        break;

    case 2 :
        printf("La taille d'un short signed est de : %li octets, et celle d'un unsigned : %li octets\n", sizeof(signed short), sizeof(unsigned short));
        break;

    case 3 :
        printf("La taille d'un int signed est de : %li octets, et celle d'un unsigned : %li octets\n", sizeof(signed int), sizeof(unsigned int));
        break;

    case 4 :
        printf("La taille d'un long int signed est de : %li octets, et celle d'un unsigned : %li octets\n", sizeof(signed long int), sizeof(unsigned long int));
        break;

    case 5 :
        printf("La taille d'un long long int signed est de : %li octets, et celle d'un unsigned : %li octets\n", sizeof(signed long long int), sizeof(unsigned long long int));
        break;

    case 6 :
        printf("La taille d'un float est de : %li octets\n", sizeof(float));
        break;

    case 7 :
        printf("La taille d'un double est de : %li octets\n", sizeof(double));
        break;

    case 8 :
        printf("La taille d'un long double est de : %li octets\n", sizeof(long double));
        break;
    
    default:
        printf("Le type n'est pas valide\n");
        break;
    }

    return 0;
}