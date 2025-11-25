#include <stdio.h>
#include "hud.h"

int main() {
    int escolha;

    do {
        mainHud();
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                break;
            case 2:
                break;
        }
    } while (escolha != 2);

    return 0;
}