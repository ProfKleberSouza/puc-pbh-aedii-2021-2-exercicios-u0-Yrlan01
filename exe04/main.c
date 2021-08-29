#include <stdio.h>

int main() {
   int a, b, c;
   scanf("%i", &a);
   scanf("%i", &b);
   scanf("%i", &c);

  if(a < b && a < c){
      printf("MENOR = %i\n", a);
    }else 
    if(b < c && b < a){
      printf("MENOR = %i\n", b); 
     }else
    printf("MENOR = %i\n", c); 
    
   if(a > b && a > c){
   printf("MAIOR = %i\n", a);
   }else
    if(b > a && b>c){
        printf("MAIOR = %i\n", b); 
   }else
        printf("MAIOR = %i\n", c);
   
   return 0;
}