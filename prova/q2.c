  GNU nano 8.3                                                                     q2.c                                                                               
#include <stdio.h>

int main()
{
        int praia;
        printf("Digite o número da praia:");
        scanf("%d", &praia);

        switch (praia)
        {
                case 1:
                        printf("Mergulho com cilindro");
                break;
                case 2:
                        printf("Surfe nas ondas");
                break;
                case 3:
                        printf("Passeio de caiaque");                   
                break;
                case 4:
                        printf("Caminhada na areia");
                break;
                case 5:
                        printf("Banho de sol");
                break;
                default:
                        printf("Praia inválida!");                      
                break;
        }
        return 0;
}

