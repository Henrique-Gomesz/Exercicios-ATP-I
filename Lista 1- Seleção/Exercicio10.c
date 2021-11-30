#include<stdio.h>
int main()
{

    float sal;
    printf("Digite o salario do colaborador: ");
    scanf("%f", &sal);
    printf("Imposto a ser pago: %.3f\n", sal*0.05);
    printf("Salario liquido: %.3f\n", sal-(sal*0.05));
    
}