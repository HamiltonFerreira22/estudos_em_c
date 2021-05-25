#include <stdio.h>
int main()

{
    int A, B, S;
    int i = 4;
    do
    {
        printf("\n\nInforme o valor de A: ");
        scanf("%d", &A);
        printf("\n\nInforme o valor de B: ");
        scanf("%d", &B);
        S = A + B;
        printf("\nResultado: %d \n", S);
        i++;
    } while (i <= 3);
    
}

