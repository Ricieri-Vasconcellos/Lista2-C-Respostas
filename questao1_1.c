#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <windows.h>

int main()
{
    SetConsoleTitle("Jogo do numero magico");
    setlocale(LC_ALL, "portuguese");

    int num, X, count = 0;

    srand(time(NULL));

    X = rand() % 501;

    printf("=======O jogo começou!======\n");
    printf("\nTente advinhar o numero entre 0 e 500!\n");

    do
    {
        count++;
        printf("\nTentativa atual: %d\n", count);
        printf("\n Qual o seu palpite? ");
        scanf("%d", &num);

        if (num > X)
        {
            printf("%d > X\n", num);
            printf("Seu numero é maior do que o número sorteado!\n");
        }
        else if (num < X)
        {
            printf("%d < X\n", num);
            printf("Seu numero é menor do que o número sorteado!\n");
        }
        else
        {
            printf("%d = X\n", num);
            printf("Parabéns você acertou!\n");
        }

    } while (num != X);

    printf("\n--- Resultado Final ---\n");
    printf("Tentativas: %d\n", count);

    if (count <= 3)
    {
        printf("Classificacao: Muito Sortudo!\n");
    }
    else if (count <= 6)
    {
        printf("Classificacao: Sortudo!\n");
    }
    else if (count <= 10)
    {
        printf("Classificacao: Normal!\n");
    }
    else
    {
        printf("Classificacao: Tente novamente!\n");
    }

    return 0;
}