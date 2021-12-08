#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <Windows.h>

int main()
{
    char nome1[30];
    int opcao, i = 10;

    do
    {
        puts("Insira o nome: ");
        scanf("%s", &nome1);
        system("cls");
        printf("\t\t %s\n ", strupr(nome1));
        printf("\t\t %i caracteres no total\n", strlen(nome1));

        puts("Deseja inserir mais nomes? 1 - Sim ");
        scanf("%i", &opcao);
    } while (opcao == 1);
    while (i >= 0)
    {
        Sleep(1000);
        system("cls");
        printf("\t\tO programa se encerrara automaticamente em %is", i);
        i--;
    }
    return 0;
}
