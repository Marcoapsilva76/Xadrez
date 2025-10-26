#include <stdio.h> 

int main() { 
    
    //Movimento da Torre usando for
    printf("Movimento da Torre (5 casas para a Direita)");
    
    //Torre se move 5 casas.
    for (int i = 0; i < 5; i++) {

        printf("Direita\n"); // Imprime a direção do movimento.
    }
    printf("-----------\n");
    //Movimento do Bispo, usando while
    printf("Movimento do Bispo (5 casas na diagonal para Cima e Direita)\n");
    int casasBispo = 0; // Inicializa um contador para as casas do bispo
    // O bispo se move enquanto o número de casas for menor que 5.
    while (casasBispo < 5) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        casasBispo++;             // Incrementa o contador de casas
    }
    
    printf("-----------\n");
    //Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha (8 casas para a Esquerda) \n");
    int casasRainha = 0; // Inicializa um contador para as casas da rainha
    // A rainha se move 8 casas.
    do {
        printf("Esquerda\n"); // Imprime a direção do movimento
        casasRainha++;        // Incrementa o contador de casas
    } while (casasRainha < 8); // Continua o loop enquanto o número de casas for menor que 8
        printf("-----------\n\n");
    //Movimento da cavalo usando for
    printf("Movimento do cavalo (2 casas para baixo e uma para a esquerda)\n");
    
    //Cavalo se move 2 casas para baixo e uma para a esquerda.
    for (int i = 0; i < 2; i++) {
       
        printf("Baixo\n");
       }// Loop 'do-while' para o movimento "Esquerda"
    int UmaVez = 0; //Variável para rodar uma vez apenas
    do {
        printf("Esquerda\n"); //o único movimento
        UmaVez++;
    } while (UmaVez < 1);

    return 0; 
}
