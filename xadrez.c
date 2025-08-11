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
            printf(" %s", torre);

            Torre(contador+1);
        }
    }

// Movimento do Bispo
    void Bispo(int contador) 
    {
        char bispo[20];

        strcpy(bispo, "Cima");

        if (contador <= 5) 
        {
            printf("\n %s \n", bispo);

            for (int c = 0; c < 1; c++) {
                strcpy(bispo, "Direita");
                printf(" %s", bispo);                
            }
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
            printf(" %s", rainha);

            Rainha(contador+1);            
        }
    }

// Movimento do Cavalo
    void Cavalo(int contador) 
    {
        char cavalo[20];

        strcpy(cavalo, "Baixo");

        for(int c = 0, j = 0; c < 2; c++, j++) 
        {
            printf("%s \n", cavalo);

            if(c < 1)continue;

                strcpy(cavalo, "Esquerda");
                printf(" %s", cavalo);
            
            if(c == j)break;
        }

    }

int main () {

    int repeticao = 1;

    // As Functions são chamadas:

    printf("Movimento da Torre: \n");

    Torre(repeticao);

    printf("\n Movimento do Bispo: \n");

    Bispo(repeticao);

    printf("\n Movimento da Rainha: \n");

    Rainha(repeticao);

    printf("\n Movimento do Cavalo: \n");

    Cavalo(repeticao);

    return 0;

}
