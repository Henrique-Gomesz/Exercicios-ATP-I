#include<stdio.h>
int main ()
{   
    int i;
    float media=0,notas[3];

    for(i=0;i<3;i++)
    {
        printf("Digite a %d.a nota do aluno\n",i+1);
        scanf("%f", &notas[i]);
        media+=notas[i];
    }
    if(media/3 <7)
        printf("Aluno Reprovado\n");
    else
        printf("Aluno Aprovado\n");
}