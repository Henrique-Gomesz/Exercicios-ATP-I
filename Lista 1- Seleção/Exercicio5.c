#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Digite o primeiro elemento:");
    scanf("%d", &a);
    printf("Digite o segundo elemento:");
    scanf("%d", &b);
    printf("Digite o terceiro elemento");
    scanf("%d", &c);

    if(a>b)
    {
        if(a>c)
            printf("O primeiro elemento e maior\n");
        else
            printf("O terceiro elemento e maior\n");
    }
    else if(b>c)
        printf("O segundo elemento e o maior\n");
    else
        printf("O terceiro elemenro e o maior\n");
}