#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Inverte Palavra");

    int count = 0;
    char palavra[70];

    printf("Digite a palavra que deseja inverter: ");
    gets(palavra);

    printf("A palavra invertida fica: \n");

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }
    printf("\n");

    return 0;
}