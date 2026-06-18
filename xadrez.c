#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    /*
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int movimentoBispo = 0;
    int movimentoTorre = 0;
    int movimentoRainha;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while (movimentoBispo < 5) {
        printf("%d - Bispo para cima\n", movimentoBispo);
        printf("%d - bispo para a direita\n", movimentoBispo);
        movimentoBispo++;
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do {
        printf("%d - Torre para a direita\n", movimentoTorre);
        movimentoTorre++;
    }
    while (movimentoTorre < 5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (movimentoRainha = 0; movimentoRainha < 8; movimentoRainha++) {
        printf("%d - Rainha para a esquerda\n", movimentoRainha);
    }
    */
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int movimentoCavalo;
    int movimentoHorizontalCavalo;
    int movimentoVerticalCavalo;

    for (movimentoCavalo = 0; movimentoCavalo < 5; movimentoCavalo++) {
        for (movimentoVerticalCavalo = 0; movimentoVerticalCavalo < 1; movimentoVerticalCavalo++) {
            printf("Cavalo para baixo\n");
            printf("Cavalo para baixo\n");
            for (movimentoHorizontalCavalo = 0; movimentoHorizontalCavalo < 1; movimentoHorizontalCavalo++) {
                printf("Cavalo para esquerda\n");
            }
        }
        
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
