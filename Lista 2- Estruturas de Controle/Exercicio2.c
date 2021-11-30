#include<stdio.h>
int main()
{
    float sal;

    printf("Digite o salario do colaborador:");
    scanf("%f", &sal);
    if(sal <= 300)
        printf("Salario reajustado: R$%.3f\n", sal+sal*0.5);
    else    
        printf("Salario Rajustado: R$%.3f", sal+sal*0.3);

}