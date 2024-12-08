#include <stdio.h>
#include <limits.h>

#define MAX 100

// Complexidade: O(n), Ótimo? Nem sempre
int menorsomadescisdaguloso(int triangulo[][100], int tamanho) {
    int linha = 0, coluna = 0;
    int menorsoma = triangulo[0][0];

    while (linha < tamanho - 1) {
        // compara-se os dois números da próxima linha e escolhe-se o menor e atualiza a coluna
        if (coluna < tamanho - linha - 1 && triangulo[linha + 1][coluna] < triangulo[linha + 1][coluna + 1]) {
            coluna++; // Escolhe o caminho da direita
        }
        menorsoma += triangulo[linha + 1][coluna];
        linha++;
    }

    return menorsoma;
}

int main() {
    int triangulo[MAX][MAX];
    int tamanho;

    // Leitura do tamanho do triângulo e dos valores
    printf("Digite o tamanho do triângulo: ");
    scanf("%d", &tamanho);

    printf("Digite os elementos do triângulo:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j <= i; j++) {
            scanf("%d", &triangulo[i][j]);
        }
    }

    int menorsomadescisda = menorsomadescisdaguloso(triangulo, tamanho);
    printf("[Guloso] A menor soma é: %d\n\n", menorsomadescisda);

    return 0;
}