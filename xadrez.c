#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato

int main() {
    int rainha, bispo, torre;
    int casa = 0;
    int peca;
    int i = 0;
    //inicialização das variaveis
    
    printf("---Bem vindo ao jogo de Xadrez---\n");
    printf("Vamos mostrar o movimento das seguintes peças:\n");
    printf("1 - Rainha\n");
    printf("2 - Bispo\n");
    printf("3 - Torre\n");
    printf("4 - Cavalo\n");
    printf("Escolha qual número de peça deseja ver sua movimentação: ");
    scanf("%d", &peca);
    //Menu destinado a escolha da peça que o usuario deseja verificar o movimento.
    switch (peca){
    case 1:
        printf("---Rainha escolhida---\n");
        for (casa = 0; casa < 8; casa++){
            printf("Esquerda\n");
        }
        printf("---Movimento finalizado---\n");
    //Movimento da Rainha.
    //OBS:Essa movimentação da rainha, não faz muito sentido pois o tabuleiro não permitiria se movimentar
    //8 vezes para a esquerda, já que o maximo possivel seria 7. Porém como foi solicitado esse valor,
    //foi feito.
    break;
    case 2:
        printf("---Bispo escolhido---\n");
        while (casa < 5)
        {
            printf("Cima | Direita\n");
            casa++;
        }
        printf("---Movimento finalizado---\n");
    //Movimento do Bispo.
    break;
    case 3:
        printf("---Torre escolhida---\n");
        do
        {
            printf("Direita\n");
            casa++;
        } while (casa < 5);
        printf("---Movimento finalizado---\n");
    //Movimento da Torre
    break;
    case 4:
        printf("---Cavalo escolhido---\n");
        for (i = 0; i < 2; i++);
        {
            while (casa < 2)
            {
                printf("Baixo\n");
                casa++;
            }
            printf("Esquerda\n");
        }
    //Movimento do cavalo
    break;
    default:
        printf("Opção Inválida");
        break;
    //Caso usuario digite uma opção invalida o codigo é finalizado.
    }
    return 0;
}
