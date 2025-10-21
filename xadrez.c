#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre

void MovRainha(int rainha){
    if (rainha > 0){
    printf("Esquerda\n");
    MovRainha(rainha - 1);
    }
}
//Função da Rainha

void MovBispo(int bispo){
    int casa = 0;
    //variavel de controle para a função
    if (bispo > 0){
        for (int i = 0; i < 1; i++){
        printf("Direita\n");
            while (casa < 1){
            printf("Cima\n");
            casa++;
            }
        }
    MovBispo(bispo - 1);
    }
}
//Função do Bispo

void MovTorre(int torre){
    if (torre > 0){
    printf("Direita\n");
    MovTorre(torre - 1);
    }
}
//Função da Torre

int main() {
    int casa = 0;
    int peca;
    int i = 0;
    int j = 0;
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
        MovRainha(8);
        printf("---Movimento finalizado---\n");
        return 0;
        //Movimento da Rainha.
    //OBS:Essa movimentação da rainha, não faz muito sentido pois o tabuleiro não permitiria se movimentar
    //8 vezes para a esquerda, já que o maximo possivel seria 7. Porém como foi solicitado esse valor,
    //foi feito.
    break;
    case 2:
        printf("---Bispo escolhido---\n");
        MovBispo(5);
        printf("---Movimento finalizado---\n");
        return 0;
        //Movimento do Bispo
    break;
    case 3:
        printf("---Torre escolhida---\n");
        MovTorre(5);
        printf("---Movimento finalizado---\n");
        return 0;
    //Movimento da Torre
    break;
    case 4:
        printf("---Cavalo escolhido---\n");
        for (i = 0, j = 0; i < 1 && j < 2; i++,j++){
            while (casa < 2)
            {
                printf("Cima\n");
                casa++;
            }
            printf("Direita\n");
            if (j == 1) break;
        }
        printf("---Movimento finalizado---\n");
        return 0;
    //Movimento do cavalo
    break;
    default:
        printf("Opção Inválida");
        break;
    //Caso usuario digite uma opção invalida o codigo é finalizado.
    }
    return 0;
}