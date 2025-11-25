#include <stdio.h>
#include <stdlib.h>
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
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j].temBomba = 0;
            tabuleiro[i][j].estaAberta = 0;
            tabuleiro[i][j].vizinhos = 0;
        }
    }
}

void sortearBombas(Celula tabuleiro[TAM][TAM]) {
    int colocadas = 0;
    while (colocadas < BOMBAS) {
        int r = rand() % TAM;
        int c = rand() % TAM;
        if (tabuleiro[r][c].temBomba == 0) {
            tabuleiro[r][c].temBomba = 1;
            colocadas++;
        }
    }
}

float jogarCampoMinado() {

    Celula tabuleiro[TAM][TAM];
    inicializarTabuleiro(tabuleiro);
    sortearBombas(tabuleiro);

    return 0.00;
}