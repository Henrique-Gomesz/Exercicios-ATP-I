#include<stdio.h>
#define TF 6
int main()
{
    int a[TF],i,par=0,imp=0;

    for(i=0;i<TF;i++)
    {
        printf("Digite o elemento:");
        scanf("%d", &a[i]);
        if(a[i]%2 == 0)
            par++;
        else
            imp++;
    }
    printf("Elementos pares: %d | Elementos impares: %d\n",par,imp);

}