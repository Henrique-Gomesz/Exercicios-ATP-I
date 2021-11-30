#include<stdio.h>
int main()
{

    int idade;

    printf("Digite a idade:");
    scanf("%d", &idade);

    printf("Idade em meses %d\n", idade*12);
    printf("Idade em dias %d\n",idade*365);
    printf("Idade em horas %d\n",(idade*365)*24);
    printf("Idade em minutos %d\n",idade*365*24*60);
}