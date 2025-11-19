#include <stdio.h>
#include <windows.h>

void minusculo(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}

void substituicao(char *str, char l)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {

            str[i] = l;
        }
    }
}

int vogais_c(char *str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {

            count++;
        }
    }
    return count;
}

int main()
{
    int vogais = 0;
    char palavra[70], letra;

    printf("Digite uma palavra: ");
    gets(palavra);

    minusculo(palavra);

    vogais = vogais_c(palavra);

    printf("A palavra '%s' tem %d vogais.\n", palavra, vogais);
    printf("Deseja substituir essas vogais por qual letra: ");
    scanf(" %c", &letra);

    substituicao(palavra, letra);

    printf("A nova palavra: %s\n", palavra);

    return 0;
}