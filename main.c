#include <stdio.h>
#include "hud.h"

int main() {
    int escolha;

    do {
        mainHud();
        scanf("%d", &escolha);
    } while (escolha != 2);

    return 0;
}