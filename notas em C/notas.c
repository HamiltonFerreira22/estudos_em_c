#include <stdio.h>

int main()

{
    double A,B,X;
    printf("Digite a primera nota: ");
    scanf("%lf",&A);
    printf("Digite a segunda nota: ");
    scanf("%lf",&B);
    X = (A + B) / 2;
    printf("Media %.2f \n", X);

    if (X >= 5)
    {
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
    printf("\n");

    return 0;
    
}