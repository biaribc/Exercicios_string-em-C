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
        puts("Insira o segundo nome: ");
        scanf("%s", &nome2);
        printf("Nome 1: %s\n ", strupr(nome1));
        printf("Nome 2: %s\n ", strlwr(nome2));

        puts("Deseja inserir mais nomes? 1 - Sim ");
        scanf("%i", &opcao);
    } while (opcao == 1);
    return 0;
}
