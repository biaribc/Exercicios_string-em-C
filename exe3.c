#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int main(void)
{
    char nome1[20], nome2[20];
    int opcao;

    do
    {
        puts("Insira o primeiro nome: ");
        scanf("%s", &nome1);
        puts("Insira o ultimo nome: ");
        scanf("%s", &nome2);

        printf("Seu nome completo e %s\n", strcat(strcat(nome1, " "), nome2));
        printf("Seu nome tem %i letras\n", strlen(nome1) - 1);
        puts("Deseja inserir mais nomes? 1 - Sim ");
        scanf("%i", &opcao);
    } while (opcao == 1);
    return 0;
}
