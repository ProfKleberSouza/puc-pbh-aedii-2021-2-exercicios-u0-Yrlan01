#include <stdio.h>

int main (){
    int T, R, V, L, D;
    scanf("%i %i %i", &T, &V, &R);

    D = T * V;
    L = D / R; 

    printf("R = %i\n",R);
    printf("V = %i\n",V);
    printf("T = %i\n",T);
    printf("D = %i\n",D);
    printf("L = %i\n",L); 

   return 0; 
}