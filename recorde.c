#include <stdio.h>
#include "recorde.h"
#define ARQUIVO_NOME "recorde.txt"

float carregarRecorde() {
    FILE *arquivo = fopen(ARQUIVO_NOME, "r");
    float recorde = 9999.0;

    if (arquivo != NULL) {
        fscanf(arquivo, "%f", &recorde);
        fclose(arquivo);
    }
    return recorde;
}

void salvarRecorde(float tempo) {
    float recordeAtual = carregarRecorde();

    if (tempo < recordeAtual) {
        FILE *arquivo = fopen(ARQUIVO_NOME, "w");
        if (arquivo != NULL) {
            fprintf(arquivo, "%.2f", tempo);
            fclose(arquivo);
            printf("\n[!] Novo recorde salvo: %.2f segundos!\n", tempo);
        } else {
            printf("\n[!] Erro ao salvar o recorde.\n");
        }
    }
}