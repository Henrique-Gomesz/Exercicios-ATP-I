#include<stdio.h>
#define TF 10
int main()
{
    int qtd_peca[TF],i,j,total=0;
    float prec_peca[TF];

    for(i=0;i<TF;i++)
    {
        printf("Digite o preco da peca: R$");
        scanf("%f", &prec_peca[i]);
        printf("Digite a quantidade de pecas vendidas: ");
        scanf("%d", &qtd_peca[i]);
    }

    for(i=0;i<TF;i++)
    {
        printf("Valor da venda R$%.2f | Vendedor: %d\n", qtd_peca[i]*prec_peca[i],i+1);
    }
    for(i=0;i<TF;i++)
    {
        total+=qtd_peca[i];
    }
    printf("Total de pecas vendidas: %d\n", total);
}