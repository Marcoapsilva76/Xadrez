#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// --- Funções Recursivas ---


void moverTorreRecursivo(int casas) {
    if (casas <= 0) { // Caso base: Não há mais casas para mover
        return;
    }
    printf("Direita\n"); // Ação: Imprime a direção
    moverTorreRecursivo(casas - 1); // Chamada recursiva para a próxima casa
}


void moverRainhaRecursivo(int casas) {
    if (casas <= 0) { // Caso base: Não há mais casas para mover
        return;
    }
    printf("Esquerda\n"); // Ação: Imprime a direção
    moverRainhaRecursivo(casas - 1); // Chamada recursiva para a próxima casa
}


void voidMoverBispoRecursivo(int casas) {
    if (casas <= 0) { // Caso base: Não há mais casas para mover
        return;
    }
    printf("Cima, Direita\n"); // Ação: Imprime a direção diagonal
    voidMoverBispoRecursivo(casas - 1); // Chamada recursiva para a próxima casa
}

int main() {
    printf("--- Movimentos Complexos de Xadrez (Versão Simplificada) ---\n\n");

    // --- Movimento da Torre (5 casas para a Direita) com Recursividade ---
    printf("Movimento da Torre (5 casas para a Direita - Recursivo):\n");
    moverTorreRecursivo(5);
    printf("-----------\n\n");

    // --- Movimento da Rainha (8 casas para a Esquerda) com Recursividade ---
    printf("Movimento da Rainha (8 casas para a Esquerda - Recursivo):\n");
    moverRainhaRecursivo(8);
    printf("-----------\n\n");

    // Movimento do Bispo (5 casas na diagonal para Cima e Direita) com Loops Aninhados
   
    printf("Movimento do Bispo (5 casas Cima, Direita - Loops Aninhados):\n");
    int casasDiagonaisBispo = 5;
    for (int i = 0; i < casasDiagonaisBispo; i++) { // Loop externo: cada iteração é um passo diagonal
        for (int j = 0; j < 1; j++) { // Loop interno: garante que cada passo imprima a direção combinada uma vez
            printf("Cima, Direita\n");
        }
    }
 
    printf("-----------\n\n");


    // Movimento do Cavalo (2 casas para Cima e 1 para a Direita) com Loops Aninhados
    printf("Movimento do Cavalo (2 Cima, 1 Direita - Loops Aninhados Simples):\n");
    int i, j; // Variáveis de controle para os loops

    // Loop externo para os "passos" do movimento em L
    for (i = 0; i < 1; i++) { // Executa uma vez para um movimento L completo
        // Loop interno para os movimentos verticais (2 para Cima)
        for (j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        // Após os movimentos para cima, imprime o movimento para a direita
        printf("Direita\n");
    }
    printf("-----------\n\n");

    return 0;
}
