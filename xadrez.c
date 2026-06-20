#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentoBispo(int numero) {
        if (numero > 0) {
            printf("%d - Bispo para cima\n", numero);
            printf("%d - bispo para a direita\n", numero);
            movimentoBispo(numero - 1);
        }
        
    }

void movimentoTorre(int numero) {
        if (numero > 0) {
            printf("%d - Torre para a direita\n", numero);
            movimentoTorre(numero - 1);
        }
    }

void movimentoRainha(int numero) {
        if (numero > 0) {
            printf("%d - Rainha para a esquerda\n", numero);
            movimentoRainha(numero - 1);
        }
    }

void movimentoCavalo(int numero) {
    if (numero > 0) {
        int passosVerticais = 2;
        int passosHorizontais = 1;
        int v, h;
        for (v = 1; v <= passosVerticais; v++) {
            printf("%d - Cavalo para cima\n", numero);

            if (v < passosVerticais) {
                continue; // Continua para o próximo passo vertical
            }

            for (h = 1; h <= passosHorizontais; h++) {
                printf("%d - Cavalo para direita\n", numero);

                break; // Sai do loop horizontal após o primeiro movimento
            }
        }
        movimentoCavalo(numero - 1);
    }
}

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
    */
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    movimentoBispo(5);
    printf("\n");
    movimentoTorre(5);
    printf("\n");
    movimentoRainha(8);
    printf("\n");

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    movimentoCavalo(5);

    return 0;
}
