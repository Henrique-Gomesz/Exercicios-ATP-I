#include<stdio.h>
int main()
{
    float sal;

    printf("Digite o salario do colaborador: ");
    scanf("%f", &sal);

    printf("Salario reajustado: R$%.3f\n", sal+(sal*0.25));
    printf("Reajuste de R$%.3f\n", sal*0.25);
    printf("Salario antes do reajuste: R$%.3f\n", sal);

}