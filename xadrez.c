#include <stdio.h>
#include <string.h>

// Não finalizado, preciso da ajuda do Tutor

// Functions de cada peça de Xadrez

// Movimento da Torre
    void Torre(int contador) 
    {
       char torre[20];

       strcpy(torre, "Direita");
       
        if (contador <= 4) 
        {
            printf("%s \n", torre);

            Torre(contador+1);
        }
    }

// Movimento do Bispo
    void Bispo(int contador) 
    {
        char bispo[20];

        strcpy(bispo, "Cima, Direita");

        if (contador <= 5) 
        {
            printf("%s \n", bispo);
                Bispo(contador+1);            
        }
    }

// Movimento da Rainha
    void Rainha(int contador) 
    {
        char rainha[20];

        strcpy(rainha, "Esquerda");

        if (contador <= 8)
        {
            printf("%s \n", rainha);

            Rainha(contador+1);            
        }
    }

// Movimento do Cavalo
    void Cavalo(int contador) 
    {
        char cavalo[20];

        strcpy(cavalo, "Cima");

        for(int c = 0, j = 0; c < 2; c++, j++) 
        {
            printf("%s \n", cavalo);

            if(c < 1)continue;

            strcpy(cavalo, "Direita");

                printf("%s \n", cavalo);
            
            if(c == j)break;
        }

    }

int main () {

    int repeticao = 1;

    // As Functions são chamadas:

    printf("Movimento da Torre: \n");

    Torre(repeticao);

    printf("\n");

    printf("Movimento do Bispo: \n");

    Bispo(repeticao);

    printf("\n");

    printf("Movimento da Rainha: \n");

    Rainha(repeticao);

    printf("\n");

    printf("Movimento do Cavalo: \n");

    Cavalo(repeticao);

    printf("\n");    

    return 0;

}
