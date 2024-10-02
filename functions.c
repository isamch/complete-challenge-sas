#include <stdio.h>
#include <string.h>


#include "functions.h"


// quantitee : 
int count_etud = 0;
int count_departement_math = 0;
int count_departement_svt = 0;
int count_departement_phisique = 0;



// Menu : 
void  show_meni_principale(){

    printf("\n===============================================\n");
    printf("1. ajouter etudiants.\n");
    printf("2. modifier et supprimer.\n");
    printf("3. affichage.\n");
    printf("4. calcule moyenne generale.\n");
    printf("5. statistique.\n");
    printf("6. recherche.\n");
    printf("7. trier.\n");
    printf("\n===============================================\n");
}


// add etudiants :
void add_etudiants(){

    // if univirsity pleine:
    if ( count_etud == max_etud )
    {
        printf("univirsity is full.\n");
        return;
    }


    // menu pour select departement :
    int choix_departement;
    printf("\n==================\n");
    printf("select votre departement : \n");
    printf("1. MATH.\n");
    printf("2. PC.\n");
    printf("3. SVT.\n");
    printf("\n==================\n");
    
    scanf("%d", &choix_departement);

    switch (choix_departement)
    {
    case 1:
        if ( count_departement_math == max_depa )
        {
            printf("departement is Full.");
            return;       
        }else{
            strcpy(etude[count_etud].prenom_etud , "MATH");
            count_departement_math++;
        }
        break;
    case 2:
        if ( count_departement_phisique == max_depa )
        {
            printf("departement is Full.");
            return;       
        }else{
            strcpy(etude[count_etud].prenom_etud , "PC");
            count_departement_phisique++;
        }
        break;
    case 3:
        if ( count_departement_svt == max_depa )
        {
            printf("departement is Full.");
            return;       
        }else{
            strcpy(etude[count_etud].prenom_etud , "SVT");
            count_departement_svt++;
        }
        break;
    default:
        printf("departement introuvable.!");
            return;       
        break;
    }

    
    getchar();
    printf("add id : ");
    scanf("%lu", &etude[count_etud].id_etud);
    getchar();
    printf("add name : ");
    scanf("%[^\n]", etude[count_etud].nom_etud);
    
    getchar();
    printf("add prenom : ");
    scanf("%[^\n]", etude[count_etud].prenom_etud);
    
    printf("add date : \n");
    printf("Jour : ");
    scanf("%d", &etude[count_etud].date_n.jour);

    printf("mois : ");
    scanf("%d", &etude[count_etud].date_n.mois);
    
    printf("annee : ");
    scanf("%d", &etude[count_etud].date_n.annee);



    getchar();
    printf("add  note generale: ");
    scanf("%f", &etude[count_etud].note_generale);

    // count_etud add :
    count_etud++;

    printf("Successfuly add.");
    
}





// for loop for add etuds :
void loop_fn(){
    int number_etud_shot;
    printf("Enter how many etud you wanna add : ");
    scanf("%d", &number_etud_shot);

    for (int i = 0; i < number_etud_shot; i++)
    {
        add_etudiants();
    }

}







