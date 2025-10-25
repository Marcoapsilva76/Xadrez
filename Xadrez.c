#include <stdio.h> 

int main() { 
    //Movimento da Torre usando for
    printf("Movimento da Torre (5 casas para a Direita)");
    
    //Torre se move 5 casas.
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento.
    }
    
    //Movimento do Bispo, usando while
    printf("Movimento do Bispo (5 casas na diagonal para Cima e Direita)\n");
    int casasBispo = 0; // Inicializa um contador para as casas do bispo
    // O bispo se move enquanto o número de casas for menor que 5.
    while (casasBispo < 5) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        casasBispo++;             // Incrementa o contador de casas
    }
    

    //Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha (8 casas para a Esquerda) \n");
    int casasRainha = 0; // Inicializa um contador para as casas da rainha
    // A rainha se move 8 casas.
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        casasRainha++;        // Incrementa o contador de casas
    } while (casasRainha < 8); // Continua o loop enquanto o número de casas for menor que 8
   

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
