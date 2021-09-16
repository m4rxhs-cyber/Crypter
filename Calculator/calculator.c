#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    float num1, num2, resto;
    int ope;
    char resposta='s';

    while (resposta != 'n')
    {
        printf("\n  C A L C U L A T O R  v1.0\n");
        printf("   made by @m4rxhs-cyber  \n");
        printf("\n ");
        printf("| Digite um numero: ", num1);
        scanf("%f", &num1);
        printf(" | Digite outro numero: ", num2);
        scanf("%f", &num2);
        printf("\n ");

        printf("| Qual a operacao voce deseja?\n");
        printf("\n+---------------------------------+\n");
        printf("| 1 - Somar                       |\n");
        printf("| 2 - Subtrair                    |\n");
        printf("| 3 - Multiplicar                 |\n");
        printf("| 4 - Dividir                     |\n");
        printf("| 5 - Resto                       |\n");
        printf("+---------------------------------+\n");
        printf("--> ");
        scanf(" %d", &ope);

        switch (ope)
        {
            case 1:
                printf("\n | O resultado da soma e: %.2f\n\n", num1 + num2);
            break;

            case 2:
                printf("\n | O resultado da subtracao e: %.2f\n\n", num1 - num2);
            break;

            case 3:
                printf("\n | O resultado da multiplicacao e: %.2f\n\n", num1 * num2);
            break;

            case 4:
                printf("\n | O resultado da divisao e: %.2f\n\n", num1 / num2);
            break;

            case 5:
                resto = (int) num1 % (int) num2;
                printf("\n | O resto da divisao e: %.2f\n\n", resto);
            break;

            default :
                printf("\n | Caracter invalido!");
            break;

        }

        printf("Deseja fazer outra operacao? [s/n] \n");
        fflush(stdin);
        scanf(" %c", &resposta);
    }
}