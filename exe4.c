#include <stdio.h>
#include <strings.h>
#include <ctype.h>

int main()
{
    char texto[100];
    int i;
    printf("Digite o texto: ");
    scanf("%[^\n]", texto);
    strlwr(texto);
    for (i = 0; i < strlen(texto) + 1; i++)
    {
        if (i == 0 || texto[i - 1] == ' ')
            texto[i] = toupper(texto[i]);
        else
            texto[i] = texto[i];
    }
    printf("\t%s", texto);
    return 0;
}
