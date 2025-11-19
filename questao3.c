#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Contador de Letras");

    char frase[100], letra;
    int count = 0, tam;

    printf("Digite uma frase: ");
    gets(frase);

    tam = strlen(frase);

    printf("Digite o caracter que deseja procurar: ");
    scanf(" %c", &letra);

    for (int i = 0; i < tam; i++)
    {
        if (frase[i] == letra)
            count++;
    }

    printf("O caracter '%c' aparece %d vezes na frase.\n", letra, count);
    printf("Frase: %s\n", frase);

    return 0;
}