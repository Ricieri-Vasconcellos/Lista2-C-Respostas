#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Removedor de Letra C");

    int num_vezes = 0;
    char str[100];

    printf("Digite uma palavra/frase para remover a letra C: ");
    gets(str);

    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'C' && str[i] != 'c')
        {
            str[j] = str[i];
            j++;
        }
        else
        {
            num_vezes++;
        }
    }
    str[j] = '\0';

    printf("A palavra/frase fica: %s\n", str);
    printf("Foram removidos %d caracteres 'C' ou 'c'!\n", num_vezes);

    return 0;
}