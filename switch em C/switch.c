#include <stdio.h>
int main()

{
    int A;
    printf("Digite um numero: ");
    scanf("%d",&A);
    switch(A) {
        case 1: 
            printf("\nO numero é igual a 1\n");
            break;
        case 2:
            printf("\nO numero é igual a 2\n");
            break;
        default:
        printf("\nO numero é diferente de 1 e 2\n");

    }
}