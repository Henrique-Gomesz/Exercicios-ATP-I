#include<stdio.h>
int main()
{
    float c;
    int f;

    printf("Digite os Fahrenheit\n");
    scanf("%d", &f);

    c=(f-32.0)*5/9;

    printf("O valor convertido para graus Celcius e : %.2f",c);

}