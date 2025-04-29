#include <stdio.h>

int main()
{
        int num1=0, num2=0, num3=0, multi=0;
        printf("Primeiro número:");
        scanf("%d", &num1);

        printf("Segundo número:");
        scanf("%d", &num2);

        printf("Terceiro número:");
        scanf("%d", &num3);

        multi = num1 * num2 * num3;

        printf("O produto é %d", multi);

        return 0;
}



