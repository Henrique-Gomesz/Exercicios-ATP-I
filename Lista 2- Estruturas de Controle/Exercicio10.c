#include<stdio.h>
int main()
{
    float a,b,c,m;
    printf("Digite a 1.a nota: ");
    scanf("%f", &a);
    printf("Digite a 2.a nota: ");
    scanf("%f", &b);
    printf("Digite a 3.a nota: ");
    scanf("%f", &c);

    m=(a+b+c)/3.0;
    if(m<5)
        printf("REPROVADO\n");
    else if(m >=5 && m<7)
        printf("EXAME\n");
    else
        printf("APROVADO!\n");
    
    

}