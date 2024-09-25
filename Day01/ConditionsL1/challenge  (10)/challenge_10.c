#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Challenge 10 : Formatage de la Date

int main(){
    
    int year, month, day;
    char *months[] = {
        "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin", 
        "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
    };
    
    printf("Entrez annee : ");
    scanf("%d", &year);
    printf("Entrez mois : ");
    scanf("%d", &month);
    printf("Entrez jour : ");
    scanf("%d", &day);
    

    printf("-------------------\n");
    printf("%d--%s--%d", day, months[month-1], year);
    
    
    
    
    
    




    return 0;
}