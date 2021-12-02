#include<stdio.h>
#define TF 9
int main()
{
    int a[TF],i,pos,j,chave=0;

    for(i=0;i<TF;i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &a[i]);
    }

    for(i=0;i<TF;i++)
    {
        chave=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j == 0)
            {
                chave++;
                break;
            }
        }
        if(chave == 0)
            printf("O elemento %d e primo e se encontra na %d.a posicao do vetor\n", a[i],i+1);
    }
}