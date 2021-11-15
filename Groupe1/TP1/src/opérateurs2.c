#include <stdio.h>

int main() {
    int num1=5, num2=3; //On créé les deux nombres avec des valeurs qui seront utilisés pour les calculs
    char op;            //On créé une chaine de caractère dans lequel on va renseigner l'opérateur
    do{
        printf("Saisissez l'opérateur : "); 
        fflush(stdout);
        scanf("%c", &op);       //On récupère l'opérateur entré par l'utilisateur et on le stock dans 'op'

        switch(op){             //On fait un swtich case en fonction de op
            case '+':           //Si op ='+'
                printf("%i %c %i = %i \n", num1, op, num2, (num1+num2));    //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
                break;
            case '-':           //Si op ='-'
                printf("%i %c %i = %i \n", num1, op, num2, (num1-num2));    //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
                break;
            case '*':           //Si op ='*'
                printf("%i %c %i = %i \n", num1, op, num2, (num1*num2));    //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
                break;
            case '/':           //Si op ='/'
               printf("%i %c %i = %i \n", num1, op, num2, (num1/num2));     //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
               break;
            case '%':           //Si op ='%'
                printf("%i %c %i = %i \n", num1, op, num2, (num1%num2));    //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
                break;
            case '&':           //Si op ='&'
                printf("%i %c %i = %i \n", num1, op, num2, (num1&num2));    //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
               break;
            case '|':           //Si op ='|'
                printf("%i %c %i = %i \n", num1, op, num2, (num1|num2));    //On print les deux nombres avec l'opérateur au milieu, suivi du résultat
                break;
            case '~':           //Si op ='~'
                printf("%c%i=%i et %c%i=%i\n",op, num1,(~num1),op ,num2, (~num2));  //On print ~num1 et ~num2
                break;    
            default:            //Si on ne correspond à aucun des opérateurs renseignés ci dessus
                printf("L'opérateur est incorrect\n");  //On indique qu'il s'agit d'un movais opérateur
                break;
        }
    }while(1);  ////J'ai mis un while(1) pour que le programme demande de réentrer un nombre à la fin de chaque calcul

    return 0;
}