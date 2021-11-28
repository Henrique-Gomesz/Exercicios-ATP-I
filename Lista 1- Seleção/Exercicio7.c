//Considerando o peso das notas como 5
#include<stdio.h>
int main()
{
    float a,b,m;

    printf("Digite a primeira nota:\n");
    scanf("%f", &a);
    printf("Digite a segunda nota:\n");
    scanf("%f", &b);

    m=((a*5)+(b*5))/10;

    printf("Media ponderada: = %.2f", m);



}