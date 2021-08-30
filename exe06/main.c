#include <stdio.h>

int main() {
    double X, Y, Z;

    scanf("%lf %lf %lf", &X, &Y, &Z);

    if(X +  Y > Z && X + Z > Y && Y + Z > X){
        if(X == Y && X == Z)
            printf("TRIANGULO EQUILATERO\n");
        else
            if(X == Y || X == Z || Y == Z)
                printf("TRIANGULO ISOSCELES\n");
            else
                printf("TRIANGULO ESCALENO\n");
    }
    else
        printf("OS LADOS NAO FORMAM UM TRIANGULO\n");
        
   return 0;
}