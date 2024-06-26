#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"

// Função para adicionar produtos ao estoque
void adicionarProduto(int estoque[][MAX_ATRIBUTOS], int *numProdutos) {
    if (*numProdutos >= MAX_PRODUTOS) {
        printf("\nErro: O estoque está cheio!\n");
        return;
    }

    printf("\nDigite o nome do produto: ");
    scanf("%s", estoque[*numProdutos] + 1); // Start storing name from index 1
    printf("\nDigite a quantidade do produto: ");
    scanf("%d", &estoque[*numProdutos][2]);

    estoque[*numProdutos][0] = *numProdutos + 1; // ID único para cada produto

    (*numProdutos)++;

    printf("\nProduto adicionado ao estoque com sucesso!\n");
}