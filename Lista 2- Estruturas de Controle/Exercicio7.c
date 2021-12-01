#include<stdio.h>
int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if(idade >=5 && idade <=7)
        printf("Categoria: INFANTIL A\n");
    if(idade >= 8 && idade <=10)
        printf("Categoria: INFANTIL B\n");
    if(idade >=11 && idade <=13)
        printf("Categoria: JUVENIL A\n");
    if(idade >=14 && idade <=17)
        printf("Categoria: JUVENIL B\n");
    if(idade >=18)
        printf("Categoria: SENIOR\n");



}