#include <stdio.h>

int main() {
   int n; 
   scanf("%i", &n);

   if (n % 2 == 0){
      printf("NUMERO PAR ");
      if(n > 0){
         printf("POSITIVO");
      }
      else{
         printf("NEGATIVO");
      }
   }
     if (n % 2 != 0){
      printf("NUMERO IMPAR ");
      if(n > 0){
         printf("POSITIVO");
      }
      else{
         printf("NEGATIVO");
      }
   }
   if(n == 0){
      printf("NEUTRO");
}
   return 0;
}