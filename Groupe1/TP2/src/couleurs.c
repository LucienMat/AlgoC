#include <stdio.h>
#include <string.h>

int main() {
    struct Couleurs {   //creation de la structure avec 4 éléments
        char Red[8];    //un Red
        char Green[8];  //un Green
        char Blue[8];   //un Blue
        char Alpha[8];  //un Alpha
    };

    struct Couleurs tableau_de_couleurs[10];    //creation du tableau qui va contenir les 10 couleurs

    struct Couleurs couleur1=   {"0x27","0x55","0x96","0x41"};  //on créer un premiere varibale de type Couleurs
    tableau_de_couleurs[0] = couleur1;                          //que l'on applique à une case du tableau
    // (cela evite de entrer tableau_de_couleur[0].Red="0x27" pour chaque element du tableau on gagne du temps et de la comprehension)
    struct Couleurs couleur2=   {"0x5E","0x88","0x61","0x08"};
    tableau_de_couleurs[1] = couleur2;

    struct Couleurs couleur3=   {"0xB5","0xCC","0x36","0x27"};
    tableau_de_couleurs[2] = couleur3;

    struct Couleurs couleur4=   {"0xC8","0xAA","0xF1","0x52"};
    tableau_de_couleurs[3] = couleur4;  

    struct Couleurs couleur5=   {"0x27","0x55","0x96","0x41"};
    tableau_de_couleurs[4] = couleur5;

    struct Couleurs couleur6=   {"0xAB","0x69","0x10","0x09"};
    tableau_de_couleurs[5] = couleur6;

    struct Couleurs couleur7=   {"0x4E","0x5D","0xD5","0x4D"};
    tableau_de_couleurs[6] = couleur7;

    struct Couleurs couleur8=   {"0xDC","0xCD","0xBB","0x01"};
    tableau_de_couleurs[7] = couleur8;

    struct Couleurs couleur9=   {"0xE5","0x50","0x23","0x88"};
    tableau_de_couleurs[8] = couleur9;

    struct Couleurs couleur10=  {"0x08","0x24","0x34","0x71"};
    tableau_de_couleurs[9] = couleur10;


    printf("couleur 1 : %s %s %s %s \n", tableau_de_couleurs[0].Red, tableau_de_couleurs[0].Green, tableau_de_couleurs[0].Blue, tableau_de_couleurs[0].Alpha);
    printf("couleur 2 : %s %s %s %s \n", tableau_de_couleurs[1].Red, tableau_de_couleurs[1].Green, tableau_de_couleurs[1].Blue, tableau_de_couleurs[1].Alpha);
    printf("couleur 3 : %s %s %s %s \n", tableau_de_couleurs[2].Red, tableau_de_couleurs[2].Green, tableau_de_couleurs[2].Blue, tableau_de_couleurs[2].Alpha);
    printf("couleur 4 : %s %s %s %s \n", tableau_de_couleurs[3].Red, tableau_de_couleurs[3].Green, tableau_de_couleurs[3].Blue, tableau_de_couleurs[3].Alpha);
    printf("couleur 5 : %s %s %s %s \n", tableau_de_couleurs[4].Red, tableau_de_couleurs[4].Green, tableau_de_couleurs[4].Blue, tableau_de_couleurs[4].Alpha);
    printf("couleur 6 : %s %s %s %s \n", tableau_de_couleurs[5].Red, tableau_de_couleurs[5].Green, tableau_de_couleurs[5].Blue, tableau_de_couleurs[5].Alpha);
    printf("couleur 7 : %s %s %s %s \n", tableau_de_couleurs[6].Red, tableau_de_couleurs[6].Green, tableau_de_couleurs[6].Blue, tableau_de_couleurs[6].Alpha);
    printf("couleur 8 : %s %s %s %s \n", tableau_de_couleurs[7].Red, tableau_de_couleurs[7].Green, tableau_de_couleurs[7].Blue, tableau_de_couleurs[7].Alpha);
    printf("couleur 9 : %s %s %s %s \n", tableau_de_couleurs[8].Red, tableau_de_couleurs[8].Green, tableau_de_couleurs[8].Blue, tableau_de_couleurs[8].Alpha);
    printf("couleur 10 : %s %s %s %s \n", tableau_de_couleurs[9].Red, tableau_de_couleurs[9].Green, tableau_de_couleurs[9].Blue, tableau_de_couleurs[9].Alpha);

    return 0;
}