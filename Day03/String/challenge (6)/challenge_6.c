#include <stdio.h>
#include <string.h>
#define MAX 50

// Challenge 6 : Compte des Occurrences d'un Caractère :


int main(){

    char text_1[MAX];
    int text_2[MAX] = {0};
    int i, j, length_1= 0;

    printf("Entrez : ");
    scanf("%[^\n]", text_1);
    getchar();

    // lenght text 1:
    while (text_1[length_1] != '\0')
    {    
        length_1++;  
    }

    int count;
    // traitement :
    for ( i = 0; i < length_1; i++)
    {   
        count = 1;
        for ( j = i+1; j < length_1; j++)
        {
            if (text_1[i] == text_1[j])
            {
                count++;   
            }
        }
        text_2[i] = count;
    }
    
    // max dans tab 2 :
    int max;
    max = text_2[0];
    for ( i = 1; i < length_1; i++)
    {
        if ( max < text_2[i])
        {
            max = text_2[i];
        }
    }

    // Affichage :
    printf("\n===================\n");
    for ( i = 0; i < length_1; i++)
    {
        if (text_2[i] == max)
        {
            printf("%c", text_1[i]);
            
        }   
    }

    




    


    
    return 0;
}
