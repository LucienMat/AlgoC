#include <stdio.h>

int main() {
    int a=5, b=1, res=a;    //res=a pour le cas où b=1

    for(int i=1; i<b; i++)  //i initialisé à 1 pour ne pas prendre en compte le b=1
    {
        res=res*a;  //on multiplie le resutlat par a à chaque tour et on le stock dans res
    }

    printf("%i ^ %i = %i \n", a, b, res);   

    return 0;
}
