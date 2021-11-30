#include<stdio.h>
#include<math.h>
int main()
{
        int conta,a,b,c,raiz;
        
        do
        {
            printf("Escolha a conta: 1-Soma | 2-Raiz Quadrada | 0-Finalizar\n");
            scanf("%d", &conta);
            if(conta == 1)
            {
                printf("Digite o primeiro elemento:");
                scanf("%d", &a);
                printf("Digite o segundo elemento:");
                scanf("%d", &b);
                printf("%d + %d = %d\n", a,b,a+b);
            }
            else if(conta == 2)
            {
                printf("Digite o elemento que voce deseja saber a raiz quadrada: ");
                scanf("%d", &c);
                raiz=sqrt(c);
                printf("A raiz quadrada de %d = %d\n", c,raiz);

            }

        }while(conta != 0);

}