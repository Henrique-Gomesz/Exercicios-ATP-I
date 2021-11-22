#include<stdio.h>
#include<string.h>
#define TFC 5
#define TFG 40
int main()
{
    char vetcursos[TFC][20];
    int vetgab[TFG],vetresp[TFG+1],i,ncand,j,pontuacao,acertos=0,qtdecand=0,maiorpont=0,candmaior;
    float candvaga;
    for(i=0;i<TFC;i++)
    {
        printf("%do. Curso\n", i+1);
        fflush(stdin);
        gets(vetcursos[i]);
    }
    for(i=0;i<TFC;i++)
    {
        printf("Resposta %da. questão:\n", i+1);
        scanf("%d", &vetgab[i]);

    }
    for(i=0;i<TFC;i++)
    {
        printf("Num. Candidato:\n");
        scanf("%d", &ncand);
        while(ncand >0)
        {
            qtdecand++;
            for(j=0;j<TFG;j++)
            {
                printf("Resposta da %da. questão\n", j+1);
                scanf("%d", vetresp[j]);
            }
            printf("Nota da redação\n");
            scanf("%d", &vetresp[TFG]);
            acertos=0;
            for(j=0;j<TFG;j++)
                if(vetgab[j]==vetresp[j])
                    acertos++;
            pontuacao=acertos/40+60+vetresp[TFG]*40/100;
            printf("Num.candidato: %d, Curso: %d %s, pontuacao:%d\n", ncand,i+1,vercursos[i],pontuacao);

            printf("Num. Candidato:\n");
            scanf("%d", &ncand);;
        }
        candvaga=(float)qtdecand/50;
        printf("Candidatos por vaga= %.2f\n", candvaga);
        if(qtdecand > 50)
            printf("Não entraram %d candidatos para esse curso\n", qtdecand-50);
        if(pontuacao > maiorpont)
        {
            maiorpont=pontuacao;
            candmaior=ncand;
        }
        printf("O candidato %d teve a melhor pontuacao\n", candmaior);

    }

    return 0;
}