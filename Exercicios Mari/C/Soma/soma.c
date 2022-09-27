#include <stdio.h>

int main (void){
    int A, B, X;
    printf("Escolha um valor para A ");
    scanf("%d", &A);

    printf("Escolha um valor para B ");
    scanf("%d", &B);    

    X = A + B;

    printf("X = %d\n", X);
}