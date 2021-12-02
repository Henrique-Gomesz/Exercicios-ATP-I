#include<stdio.h>
#include<math.h>
#define TF 12
int main()
{
    int i,maior_pos,menor_pos;
    float mes[TF],maior=0,menor=pow(2,31);
    for(i=0;i<TF;i++)
    {
        printf("Digite a temperatura do mes %d: ",i+1);
        scanf("%f", &mes[i]);
        if(mes[i] >= maior)
        {
            maior=mes[i];
            maior_pos=(float)i;
        }
        if(mes[i] <= menor)
        {
            menor=mes[i];
            menor_pos=(float)i;
        }
    }
    printf("A maior temperatura registrada foi: C %.2f e ocorrou no mes: %d\n", maior,maior_pos+1);
    printf("A menor temperatura registrada foi: C %.2f e ocorrou no mes: %d\n", menor,menor_pos+1);
}