#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>

int main()
{
    char texto[100], sobrenome[100];
    int i, n;

    printf("Digite o texto: ");
    scanf("%[^\n]", texto);
    strcpy(sobrenome, texto);
    for (i = strlen(texto); texto[i] != ' '; i--)
    {
        if (texto[i] == ' ')
            break;
    }
    texto[i] = '/';
    for (n = i + 1; n < strlen(texto); n++)
    {
        printf("%c", texto[n]);
    }
    printf("%c", texto[i]);
    for (n = 0; n < i; n++)
    {
        printf("%c", texto[n]);
    }
    return 0;
}
