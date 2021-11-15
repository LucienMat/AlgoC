#include <stdio.h>

int main() {
    int num, bit=20;    //On créé 2 entiers, num le nombre que l'on veut traduire en binaire et bit 
                        //qui correspond au nombre de bits sur lequel sera codé le nombre binaire
    char res[bit];      //On créé une chaine de caractère, qui stockera les bits et qui doit donc 
                        //avoir le même nombre d'éléments que de bits

    while(1)            //J'ai mis un while(1) pour que le programme demande de réentrer un nombre à la fin de chaque conversion.
                        //Il n'est pas utile à la conversion elle-même
    {
        printf("Entrer un nombre entre 0 et 1 048 575 : ");     //On demande à l'utilisateur de renseigner un nombre compris entre 0 et 2^(nombre de bits)
        fflush(stdout);                                         //On vide le buffer avant de récupérer les entrées du clavier
        scanf("%i", &num);                                      //On lit ce que l'utilisateur renseigne, et on le stock dans la variable num

        for(int i=0; i<bit; i++){           //On fait autant de passage qu'il y a de bits pour être sûr de tout remplir sans erreur
            if(num%2){                      //si num/2 donne un résultat entier...
                res[bit-i] = '1';           //...on rentre '1' dans l'élement correspondant dans la variable res 
                                            //(On fait l'inverse des division succéssives pour que à l'affichage ce soit dans le bon sens)
                num= num/2;                 //On divise le num par 2 pour la suite des boucles, comme num est un type entier on aura bien un entier en sorti
            }
            else {                          //Si num/2 donne un nombre à virgule, pas un entier...
                res[bit-i] = '0';           //...on rentre '0' dans l'élement correspondant dans la variable res
                num= num/2;                 //On divise le num par 2 pour la suite des boucles
            }
        }
        printf("%s\n", res);            //On affiche le resultat une fois sorti de la boucle, donc quand i=bits, donc quand tous les bits ont été remplis
    }


}