#include<stdio.h>
int main()
{
    int i,j,x,z,pos,cont;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &x);

    int a[x],aux[x];

    for(i=0;i<x;i++)
    {
        printf("Digite os elementos do vetor: ");
        scanf("%d", &a[i]);
    }
    printf("Digite o elemento para consulta no vetor: ");
    scanf("%d", &z);
    while(z >= 0)
    {
        pos=0;
        cont=0;
        for(i=0;i<x;i++)
        {
            if(z == a[i])
            {
                cont++;
                pos=i;
                if(cont == 1)
                	aux[0]=pos;
                
                if(cont > 1)
                {
                	aux[cont-1]=i;
				}
            }   
        }
        if(cont == 0)
				printf("Elemento nao presente no vetor\n");
        if(cont == 1)
        {
	        printf("O numero %d, aparece %d vezes no vetor, e se encontra na posicao %d\n", z,cont,pos+1);
	    }
	    else
	    {
	    	for(i=0;i<cont;i++)
	    	printf("O numero %d, aparece %d vezes no vetor, e pode ser encontrado na posicao %d\n", z,cont,aux[i]+1);
		}
		printf("Digite o elemento para consulta no vetor: ");
	    scanf("%d", &z);
    }
}