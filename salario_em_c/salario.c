#include <stdio.h>
#include <locale.h>
/*Calculo de Sálario*/
int main()
{
    float HT, VH, PD, TD, SB, SL;
    printf("Digite hotas trabalhadas = ");
    scanf("%f",&HT);
    printf("Valor da hora = ");
    scanf("%f",&VH);
    printf("Percentual de desconto = ");
    scanf("%f",&PD);
    SB=HT*VH;
    TD=(PD/100);
    SL=SB-TD;
    printf("Sálario bruto........:%f \n", SB);
    printf("Desconto.............:%f \n", TD);
    printf("Sálario liquido......:%f \n", SL);
    
}
