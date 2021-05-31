#include <stdio.h>

#define R 8
#define C 8

int main(){

   /*Dichiarazione*/
   int scacchi[R][C];
   int x, y;

   /*Decorazione*/
   printf("\t\t\tSCACCHIERA BINARIA\n");
   printf("\n");
   printf("CASELLA BIANCA ---> 0\n");
   printf("CASELLA NERA ---> 1\n");
   printf("\n\n");

   /*Inserimento degli 0 o 1 nella matrice*/
   for(x = 0; x < 8; x++){
      for(y = 0; y < 8; y++){
         if((x + y) % 2 == 0)
            scacchi[x][y] = 1;
         else
            scacchi[x][y] = 0;
      }
   }

   /*Stampa*/
   for(x = 0; x < 8; x++){
      for(y = 0; y < 8; y++){
         printf("%d ", scacchi[x][y]);
      }
      printf("\n");
   }

   return 0;
}