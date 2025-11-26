#include <stdio.h>
#include "hud.h"
#include "jogo.h"
#include "recorde.h"

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
                    salvarRecorde(tempoGasto);
                }
                break;
            case 2:
                float recorde = carregarRecorde();
                mensagensMenuRecorde(recorde);
                break;
            case 3:
                saindoHud();
                break;
            default:
                opErrorHud();
                break;
        }
    } while (escolha != 2);

    return 0;
}