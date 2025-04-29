#include <stdio.h>

int main () {

        int codigo, qtd;
        float total;

        printf("Digite o código do produto: ");
        scanf("%d", &codigo);

        printf("Quantidade: ");
        scanf("%d", &qtd);

        switch(codigo){
                case (100):
                        printf("Cachorro quente %dx", qtd);
                        total = 1.20 * qtd;
                        printf("\nTotal: %.2f", total);                 
                break;
                case (101):
                        
                break;
                default:
                        printf("Produto não identificado!");
                break;
        }

        return 0;
}

