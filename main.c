#include <stdio.h>
#include <string.h>


#include "functions.h"







int main(){

    int choix_main;


    do
    {
        show_meni_principale();
        
        printf("entrez votre choix : ");
        scanf("%d", &choix_main);

        while (choix_main < 0 && choix_main > 8)
        {
            printf("votre choix introuvable, essayez a nouveau : ");
            scanf("%d", &choix_main);
        }

        switch (choix_main)
        {
        case 1:
            loop_fn();
            break;
        
        default:
            break;
        }
        

    } while (1);
    








    return 0;
}
