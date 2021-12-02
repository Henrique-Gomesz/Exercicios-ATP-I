#include<stdio.h>
int  main()
{
    int a[3],b[3],c[6],i,j=0;
        //leitura dos vetores
    for(i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }
    //intercalando os vetores
    for(i=0;i<6;i=i+2)
    {
        c[i]=a[j];
        j++;
    }
    j=0;
    for(i=1;i<6;i=i+2)
    {
        c[i]=b[j];
        j++;
    }
    //exibição do vetor
    for(i=0;i<6;i++)
        printf("%d ", c[i]);
    
    



}
