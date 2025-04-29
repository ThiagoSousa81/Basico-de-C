 GNU nano 8.3                                                                   script3.c                                                                            
#include <stdio.h>

int main()
{
        char nome[50];
        int idade;
        float altura;

        printf("Nome: ");
        scanf("%s", &nome);

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Nome: %s\nIdade: %d\nAltura: %.2f", nome, idade, altura);

        return 0;
}

