#include<stdio.h>
int main()
{
    float prec;
    int cod;

    printf("Digite o codigo do produto: ");
    scanf("%d", &cod);
    printf("Digite o preco do produto: R$");
    scanf("%f", &prec);

    if(cod == 1)
        printf("Procedencia: SUL\n");
    if(cod == 2)
        printf("Procedencia: NORTE\n");
    if(cod == 3)
        printf("Procedencia: LESTE\n");
    if(cod == 4)
        printf("Procedencia: OESTE\n");
    if(cod == 5 || cod == 6)
        printf("Procedencia: NORDESTE\n");
    if(cod == 7 || cod == 8 || cod == 9)
        printf("Procedencia: SUDESTE\n");
    if(cod >= 10 && cod <=20)
        printf("Procedencia: CENTRO-OESTE\n");
    if(cod >= 21 && cod <=30)
        printf("Procedencia: NOROESTE\n");


}