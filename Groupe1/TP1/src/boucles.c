#include <stdio.h>

int main() {
    int var =8, i=1, j=1;

    do
    {
        do
        {
            if((j==1) | (i == var) | (j==i)){
                printf("* ");
            }
            else{
                printf("# ");
            
            }
            j++;
        }while(j<=i);
        printf("\n");
        i++;
        j=1;
    }while(i<=var);

    return 0;
}