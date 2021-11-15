#include <stdio.h>

int main() {
    int bit=32;         //On reprend le code de binaire.c du TP1 en changeant le nombre de bit par 32
    unsigned int num;   //On prend unsigned pour ne pas surchargée la variable 
                        
    char res[bit];      

    while(1)            

    {   //même principe que binaire.c
        printf("Entrer un nombre entre 0 et 4 294 967 296 : ");
        fflush(stdout);
        scanf("%i", &num);

        for(int i=0; i<bit; i++){
            if(num%2){
                res[bit-i] = '1';
                num= num/2;
            }
            else {
                res[bit-i] = '0';
                num= num/2;
            }
        }
        printf("%s\n", res);

        if((res[4]=='1') && (res[20]=='1')) {   //si le bit 4 et 20 du resultat sont à 1 alors on indique 1
            printf("res[4] :%c\n", res[4]);
            printf("res[20] :%c\n", res[20]);
            printf("1\n");
        }
        else {                                  //sinon on indique 0
            printf("res[4] :%c\n", res[4]);
            printf("res[20] :%c\n", res[20]);
            printf("0\n");
        }
    }
    return 0;
}