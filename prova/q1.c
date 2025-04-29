#include <stdio.h>
#include <math.h>

int main() {
        int numeroMagico;
        float energia = 0;

        printf("Insira o número mágico: ");
        scanf("%d", &numeroMagico);

        if (numeroMagico < 0) {
                printf("Número inválido!");
        }
        else if (numeroMagico % 2 != 0 && numeroMagico < 10){
                energia = sqrt(numeroMagico);           
        }
        else if (numeroMagico % 2 == 0 && numeroMagico < 10) {
                energia = pow(numeroMagico, 3);
        }
        else if (numeroMagico > 9) {
                energia = pow(numeroMagico, 2);
        }

        printf("\nEnergia: %.2f", energia);
        return 0;
}

