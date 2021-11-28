#include<stdio.h>
int main()
{
    int a,b;

    printf("Digite o primeiro elemento:");
    scanf("%d", &a);
    printf("Digite o segundo elemento:");
    scanf("%d", &b);

    if(a>b)
        printf("O primeiro elemento e maior do que o segundo!\n");
    else if(a<b)
        printf("O segundo elemento e maior do que o primeiro\n");
    else
        printf("Os elementos sao iguais\n");


}