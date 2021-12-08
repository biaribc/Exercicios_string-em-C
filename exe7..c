#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int main(void)
{
    char nome1[20], nome2[20];
    int opcao;

    do
    {
        puts("Insira a frase: ");
        scanf("%s", &nome1);
        puts("Insira o nome do candidato: ");
        scanf("%s", &nome2);
        printf("%s\n ", strcat(strcat(strupr(nome2), ": "), nome1));
        puts("Deseja inserir mais nomes? 1 - Sim ");
        scanf("%i", &opcao);
    } while (opcao == 1);
    return 0;
}
