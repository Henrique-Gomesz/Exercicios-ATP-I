#include<stdio.h>
#define TF 10
int main()
{
    int i,j,a=0,b=0,c=0;
    float n1[TF],n2[TF],m,mg=0;

    for(i=0;i<TF;i++)
    {
        printf("Digite a primeira nota do aluno %d: ", i+1);
        scanf("%f", &n1[i]);
        printf("Digite a segunda nota do aluno %d: ", i+1);
        scanf("%f", &n2[i]);
    }

    for(i=0;i<TF;i++)
        mg+=(n1[i]+n2[i])/2;
    mg=mg/TF;
    for(i=0;i<TF;i++)
    {

        m=(n1[i]+n2[i])/2;

        if(m < mg)
            c++;

        if(m >= 7)
            a++;
        else
            b++;
    }
    printf("Media da turma: %.2f\n", mg);
    printf("A quantidade de alunos que obtiveram media menor que a media geral: %d\n", c);
    printf("Quantidade de alunos apovados: %d\n", a);
    printf("Quantidade de alunos reprovados: %d\n", b);
}