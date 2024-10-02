#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Challenge 8 : Affichage de la Suite de Fibonacci

int main() {
   
    int i , n, f_0 = 0 , f_1 = 1 , f_s;

    printf("Entrez votre number : ");
    scanf("%d", &n);


   
    for ( i = 0; i < n; i++)
    {
        
        if (n == 0)
        {
            f_s = f_0;
        }else if ( n == 1 )
        {
            f_s = f_1;
        }else{
            f_s = f_0 + f_1;

            f_0 = f_1;
            f_1 = f_s;

        }
        
        

        

        printf("Inversion : %d\n", f_1);

    }
        printf("=================\n");
        // printf("Inversion : %d", f_s);


    return 0;
}