#include<stdio.h>
int main()
{
    int a,b;

    printf("Digite o primeiro elemento: ");
    scanf("%d", &a);
    printf("Digite o segundo elemento: ");
    scanf("%d", &b);

    if(a%2 == 0 && b%2 == 0)
        printf("%d + %d = %d\n",a,b,a+b);
    if(a%2 != 0 && b%2 != 0)
        printf("%d - %d = %d\n", a,b,a-b);
    if(a%2 == 0 && b%2 != 0)
        printf("%d x %d = %d\n", a,b,a*b);
    if(a%2 != 0 && b%2 == 0)
        printf("%d / %d = %d\n",a,b,a/b);
        
    

}