#include <stdio.h>

int main()
{
    int A, B, X;

   printf("Informe um valor para A: ");
   scanf("%d",&A);
   printf("Informe um valor para B: ");
   scanf("%d",&B);

    if (A > B)
    {
       X=A;
       A=B;
       B=X;
    }
    printf("\nOs valores informados são; %d e %d \n", A, B);
}

