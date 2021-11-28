#include<stdio.h>
int main()
{
    float val_dep, tax;

    printf("Digite o valor do deposito:");
    scanf("%f", &val_dep);
    printf("Digite a taxa de juroas:");
    scanf("%f", &tax);

    printf("Valor do deposito: %.2f\n", val_dep);
    printf("Rendimento: \n", tax/100*val_dep);
    printf("Valor total após o rendimento: %.2f\n", (tax/100*val_dep)+val_dep);

}