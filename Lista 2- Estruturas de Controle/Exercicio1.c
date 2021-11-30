#include<stdio.h>
int main()
{
    float a,b,c,d;

    printf("Digite a 1.a nota do aluno:");
    scanf("%f", &a);
    printf("Digite a 2.a nota do aluno:");
    scanf("%f", &b);
    printf("Digite a 3.a nota do aluno:");
    scanf("%f", &c);
    printf("Digite a 4.a nota do aluno:");
    scanf("%f", &d);

    if((a+b+c+d)/4 >= 7)
        printf("Aluno aprovado!\n");
    else
        printf("Aluno Reprovado\n");



}