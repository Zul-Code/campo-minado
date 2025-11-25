#ifndef JOGO_H
#define JOGO_H
#include "celula.h"
#define TAM 5
#define BOMBAS 5

float jogarCampoMinado();
int contarVizinhos(Celula tabuleiro[TAM][TAM], int l, int c);

#endif