//obtendo o resto da divisão trabalhando com valorees inteiros;
#include<stdio.h>
int main()
{
    int num,den;
    printf("Digite o numerador:");
    scanf("%d", &num);
    printf("Digite o denominador:");
    scanf("%d", &den);

    printf("O resto da divisão entre %d e %d = %d resto\n", num,den,num%den);


}