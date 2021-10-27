#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
        char msg[9999], crip_msg[9999], resposta='s';
        int tamanho, x, menu;

        while(resposta != 'n')
        {
            //banner
            printf(" ######  ########  ##    ## ########  ######## ######## ########\n");
            printf("##    ## ##     ##  ##  ##  ##     ##    ##    ##       ##     ## \n");
            printf("##       ##     ##   ####   ##     ##    ##    ##       ##     ## \n");
            printf("##       ########     ##    ########     ##    ######   ######## \n");
            printf("##       ##   ##      ##    ##           ##    ##       ##   ##\n");
            printf("##    ## ##    ##     ##    ##           ##    ##       ##    ##\n");
            printf(" ######  ##     ##    ##    ##           ##    ######## ##     ## \n");
            printf("                       made by m4rxhs_cyber                             \n");
            //menu
            printf("\n |Qual a operacao voce deseja?\n");
            printf("\n+---------------------------------+\n");
            printf("| 1 - Cryptografar                |\n");
            printf("| 2 - Descryptografar             |");
            printf("\n+---------------------------------+\n");
            printf("--> ");
            scanf("%d", &menu);

            //encrypt
            if (menu == 1){
            printf(" |Digite texto ou palavra a ser criptografada: \n");
            printf("--> ");
            fflush(stdin);
            fgets(msg,9998,stdin);
            tamanho = strlen(msg);

            for(x=0;x<tamanho;x++)
            {
                    crip_msg[x] = msg[x] + 3;
            }
                printf(" |A mensagem criptografada e : %s\n\n", crip_msg);
            }

            //decrypt
            if (menu ==2){
            printf(" |Digite mensagem a ser descriptografada: \n");
            printf("--> ");
            fflush(stdin);
            fgets(crip_msg,9998,stdin);
            tamanho = strlen(crip_msg);

            for(x=0;x<tamanho;x++)
            {
                    msg[x] = crip_msg[x] - 3;
            }
                printf(" |A mensagem descriptografada e : %s\n\n", msg);
            }

            printf("\n |Deseja fazer mais uma operacao?[s/n]: \n");
            printf("--> ");
            fflush(stdin);
            scanf(" %c", &resposta);
            system("cls");
        }
}
