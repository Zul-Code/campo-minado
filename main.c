#include <stdio.h>
#include "hud.h"
#include "jogo.h"

int main() {
    int escolha;

    do {
        mainHud();
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                float tempoGasto = jogarCampoMinado();
                if (tempoGasto >= 0) {
                    printf("Seu tempo: %.2f segundos.\n", tempoGasto);
                }
                break;
            case 2:
                saindoHud();
                break;
            default:
                opErrorHud();
                break;
        }
    } while (escolha != 2);

    return 0;
}