#include <stdio.h>
#include "celula.h"
#include "jogo.h"
#include "hud.h"
#define TAM 5


void mainHud() {
    printf("+== CAMPO MINADO - MENU ==+");
    printf("\n| 1. Jogar                |");
    printf("\n| 2. Sair                 |");
    printf("\n+=========================+");
    printf("\nEscolha: ");
}

void saindoHud() {
    printf("+=========================+");
    printf("\n+==   SAINDO DO JOGO   ===+");
    printf("\n+=========================+");
}

void opErrorHud() {
    printf("+=========================+");
    printf("\n+==   OPCAO INVALIDA   ===+");
    printf("\n+=========================+");
    printf("\n\n");
}

void tabuleiroHud(Celula tabuleiro[TAM][TAM], int revelarTudo) {
    printf("\n   0 1 2 3 4\n");
    printf("   ---------\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d |", i);
        for (int j = 0; j < TAM; j++) {
            if (revelarTudo && tabuleiro[i][j].temBomba) {
                printf("* ");
            } else if (tabuleiro[i][j].estaAberta) {
                printf("%d ", contarVizinhos(tabuleiro, i, j));
            } else {
                printf("? ");
            }
        }
        printf("\n");
    }
}

void mensagensJogoHud(int tipo) {
    switch (tipo) {
        case 1:
            printf("\n=== JOGO INICIADO ===\n");
            break;
        case 2:
            printf("Digite Linha e Coluna (ex: 0 1): ");
            break;
        case 3:
            printf("Coordenada invalida!\n");
            break;
        case 4:
            printf("Voce ja abriu essa posicao!\n");
            break;
        case 5:
            printf("\nBOOM! Voce pisou numa mina.\n");
            break;
        case 6:
            printf("\nPARABENS! Voce venceu!\n");
            break;
    }
}