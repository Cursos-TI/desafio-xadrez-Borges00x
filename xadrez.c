#include <stdio.h>
#include <string.h>

int main () {

    // variavies contadoras de cada peça.

    char torre[20], bispo[20], rainha[20], cavalo[20];

    int contador = 0;

    // Aqui é a parte do código onde as peças se movem usando estruturas de repetição.

    printf("Movimento da Torre: \n");

    strcpy(torre, "Direita");

    for (contador = 1; contador <= 5; contador++) {
        printf(" %s \n", torre);
    }

    printf("Movimento do Bispo: \n");

    contador = 0;

    strcpy(bispo, "Cima Direita");

    while (contador <= 5) {
        printf(" %s \n", bispo);
        contador++;
    }

    printf("Movimento da Rainha: \n");

    contador = 0;

    strcpy(rainha, "Esquerda");

    do {
        printf(" %s \n", rainha);
        contador++;
    } while(contador <= 8);

    return 0;
}
