#include<stdio.h>
int main()
{
    float m,a,b,c;

    printf("Digite a nota do laboratorio:");
    scanf("%f", &a);
    printf("Digite a nota da Av. Semestral: ");
    scanf("%f", &b);
    printf("Digite a nota do Exame final: ");
    scanf("%f", &c);

    m=(a*2+b*3+c*5)/10.0;

    if(m>8  && m<=10)
        printf("Media: %.2f | Conceito: A\n", m);
    if(m>7 && m<=8)
        printf("Media: %.2f | Conceito: B\n", m);
    if(m>6 && m<=7)
        printf("Media: %.2f | Conceito: C\n", m);
    if(m>5 && m<=6)
        printf("Media: %.2f | Conceito: D\n", m);
    if(m<5)
        printf("Media: %.2f | Conceito: E\n", m);


}