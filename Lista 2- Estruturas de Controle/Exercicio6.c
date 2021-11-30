#include<stdio.h>
int main()
{
    char sexo;
    float altura;

    printf("Digite o sexo: M-Masculino | F-Feminino\n");
    scanf("%c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    switch(sexo)
    {
        case 'M': printf("Peso ideal = %.2f\n", (72.7*altura)-58.0); break;
        case 'F': printf("Peso Ideal = %.2f\n", (62.1*altura)-44.7);

    }

}