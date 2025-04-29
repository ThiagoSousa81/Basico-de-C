#include <stdio.h>
#include <string.h>

int main() 
{
        char user1[50], user2[50], senha[50];

        printf("Nome de usuário 1: ");
        scanf("%s", user1);

        printf("Nome de usuário 2: ");
        scanf("%s", user2);

        if (!strcmp(user1, user2))
        {
                printf("\nOs nomes de usuário são iguais!");
        }
        else
        {
                printf("\nNomes de usuário diferentes!");
        }

        printf("\nDigite a senha: ");
        scanf("%s", senha);

        if (!strcmp(senha, "alunoufrb"))
        {
                printf("\nAcesso autorizado!");
        }
        else
        {
                printf("\nSenha incorreta!");
        }

        printf("\nQuantidade de caracteres do usuário 01: %ld", strlen(user1));
        return 0;


}

