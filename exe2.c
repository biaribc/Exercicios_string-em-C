#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int main(void)
{
    char nome1[20], nome2[20], nome3[20], nome4[20], nome5[20], repetido[20];
    int opcao;
    do
    {
        puts("Insira o primeiro nome:");
        scanf("%s", &nome1);
        puts("Insira o segundo nome:");
        scanf("%s", &nome2);
        if (stricmp(nome2, nome1) == 0)
            strcpy(repetido, nome2);
        puts("Insira o terceiro nome:");
        scanf("%s", &nome3);
        if (stricmp(nome3, nome1) == 0 || stricmp(nome3, nome2) == 0)
            strcpy(repetido, nome3);
        puts("Insira o quarto nome:");
        scanf("%s", &nome4);
        if (stricmp(nome4, nome1) == 0 || stricmp(nome4, nome2) == 0 || stricmp(nome4, nome3) == 0)
            strcpy(repetido, nome4);
        puts("Insira o quinto nome:");
        scanf("%s", &nome5);
        if (stricmp(nome5, nome1) == 0 || stricmp(nome5, nome2) == 0 || stricmp(nome5, nome3) == 0 || stricmp(nome5, nome4) == 0)
            strcpy(repetido, nome5);
        if (repetido)
            printf("O item ' %s ' foi inserido mais de uma vez\n\n", repetido);
        puts("Deseja inserir mais nomes? 1 - Sim ");
        scanf("%i", &opcao);
    } while (opcao == 1);
    return 0;
}
