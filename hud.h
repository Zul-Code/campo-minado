#ifndef HUD_H
#define HUD_H
#include "celula.h"
#define TAM 5

void mainHud();
void saindoHud();
void opErrorHud();
void tabuleiroHud(Celula tabuleiro[TAM][TAM], int revelarTudo);
void mensagensJogoHud(int tipo);
void mensagensMenuRecorde(float recorde);

#endif