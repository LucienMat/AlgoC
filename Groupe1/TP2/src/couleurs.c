#include <stdio.h>

int main() {
    struct couleurs {   //creation de la structure avec 4 éléments
        char Red[4];    //un Red
        char Green[4];  //un Green
        char Blue[4];   //un Blue
        char Alpha[4];  //un Alpha
    }

    struct couleurs tableau_de_couleurs[10];
    strcpy(tableau_de_couleurs[0].Red, "0x27");
    strcpy(tableau_de_couleurs[0].Green, "0x55");
    strcpy(tableau_de_couleurs[0].Blue, "0x96");
    strcpy(tableau_de_couleurs[0].Alpha, "0x41");
    
    strcpy(tableau_de_couleurs[1].Red, "0x02");
    strcpy(tableau_de_couleurs[1].Green, "0x91");
    strcpy(tableau_de_couleurs[1].Blue, "0x12");
    strcpy(tableau_de_couleurs[1].Alpha, "0x50");

    strcpy(tableau_de_couleurs[2].Red, "0x70");
    strcpy(tableau_de_couleurs[2].Green, "0x71");
    strcpy(tableau_de_couleurs[2].Blue, "0x72");
    strcpy(tableau_de_couleurs[2].Alpha, "0x73");
    
    strcpy(tableau_de_couleurs[3].Red, "0x00");
    strcpy(tableau_de_couleurs[3].Green, "0x00");
    strcpy(tableau_de_couleurs[3].Blue, "0x00");
    strcpy(tableau_de_couleurs[3].Alpha, "0x00");
    
    strcpy(tableau_de_couleurs[4].Red, "0xFF");
    strcpy(tableau_de_couleurs[4].Green, "0xFF");
    strcpy(tableau_de_couleurs[4].Blue, "0xFF");
    strcpy(tableau_de_couleurs[4].Alpha, "0xFF");

    strcpy(tableau_de_couleurs[5].Red, "0x6E");
    strcpy(tableau_de_couleurs[5].Green, "0xA3");
    strcpy(tableau_de_couleurs[5].Blue, "0x61");
    strcpy(tableau_de_couleurs[5].Alpha, "0xA7");

    strcpy(tableau_de_couleurs[6].Red, "0xB3");
    strcpy(tableau_de_couleurs[6].Green, "0xC1");
    strcpy(tableau_de_couleurs[6].Blue, "0x21");
    strcpy(tableau_de_couleurs[6].Alpha, "0x85");
    
    strcpy(tableau_de_couleurs[7].Red, "0x99");
    strcpy(tableau_de_couleurs[7].Green, "0xCC");
    strcpy(tableau_de_couleurs[7].Blue, "0x58");
    strcpy(tableau_de_couleurs[7].Alpha, "0xA3");

    strcpy(tableau_de_couleurs[8].Red, "0x8B");
    strcpy(tableau_de_couleurs[8].Green, "0xBB");
    strcpy(tableau_de_couleurs[8].Blue, "0x34");
    strcpy(tableau_de_couleurs[8].Alpha, "0x95");

    strcpy(tableau_de_couleurs[9].Red, "0xAB");
    strcpy(tableau_de_couleurs[9].Green, "0xC5");
    strcpy(tableau_de_couleurs[9].Blue, "0x66");
    strcpy(tableau_de_couleurs[9].Alpha, "0xEF");

    printf("%s \n", tableau_de_couleurs[3] );

    return 0;
}