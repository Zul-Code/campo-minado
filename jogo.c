#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"
#include "celula.h"
#include "hud.h"
#define TAM 5
#define BOMBAS 5

void inicializarTabuleiro(Celula tabuleiro[TAM][TAM]) {
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

int contarVizinhos(Celula tabuleiro[TAM][TAM], int l, int c) {
    int contagem = 0;
    for (int i = l - 1; i <= l + 1; i++) {
        for (int j = c - 1; j <= c + 1; j++) {
            if (i >= 0 && i < TAM && j >= 0 && j < TAM) {
                if (tabuleiro[i][j].temBomba) {
                    contagem++;
                }
            }
        }
    }
    return contagem;
}

float jogarCampoMinado() {
    Celula tabuleiro[TAM][TAM];
    inicializarTabuleiro(tabuleiro);
    sortearBombas(tabuleiro);

    int abertas = 0;
    int totalSeguras = (TAM * TAM) - BOMBAS;
    time_t inicio, fim;

    mensagensJogoHud(1);
    time(&inicio);

    while (abertas < totalSeguras) {
        tabuleiroHud(tabuleiro, 0);
        int l, c;

        mensagensJogoHud(2);
        scanf("%d %d", &l, &c);

        if (l < 0 || l >= TAM || c < 0 || c >= TAM) {
            mensagensJogoHud(3);
            continue;
        }
        if (tabuleiro[l][c].estaAberta) {
            mensagensJogoHud(4);
            continue;
        }

        if (tabuleiro[l][c].temBomba) {
            tabuleiroHud(tabuleiro, 1);
            mensagensJogoHud(5);
            return -1.0;
        }

        tabuleiro[l][c].estaAberta = 1;
        abertas++;
    }

    time(&fim);
    mensagensJogoHud(6);
    return difftime(fim, inicio);
}