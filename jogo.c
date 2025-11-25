#include <stdio.h>
#include "jogo.h"
#define TAM 5
#define BOMBAS 5

typedef struct {
    int temBomba;
    int estaAberta;
    int vizinhos;
} Celula;

void inicializarTabuleiro(Celula tabuleiro[TAM][TAM]) {
        for (int i = 0; i < TAM; i++) {
            for (int j = 0; j < TAM; j++) {
                tabuleiro[i][j].temBomba = 0;
                tabuleiro[i][j].estaAberta = 0;
                tabuleiro[i][j].vizinhos = 0;
            }
        }
    }

float jogarCampoMinado() {

    Celula tabuleiro[TAM][TAM];
    inicializarTabuleiro(tabuleiro);

    return 0.00;
}