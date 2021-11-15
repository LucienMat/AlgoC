#include <stdio.h>

int main() {
    int u = 1, x = 0 , y = 0, n=20;  //x et y correspondent à Ui-1 et Ui-2
    for(int i=0; i<=n; i++)         //On fait n+1 tours pour avoir U0
    {
        printf("U%i = %i \n", i, u);    //On print Un actuel

        y = x;      //Un-2 prend la valeur Un-1
        x = u;      //Un-1 prend la valeur Un
        u = x +y;   //Un+1 prend donc la valeur Un + Un-1 
    }

    return 0;
}