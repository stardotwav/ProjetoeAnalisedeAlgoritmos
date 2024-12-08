#include <stdio.h>
#include <limits.h>

#define MAX 100

// Complexidade: O(2^n)
int menorsomadescisdaforcabruta(int triangulo[][100], int linha, int coluna, int tamanho) {
    // Caso base: chegamos na última linha
    if (linha == tamanho - 1) return triangulo[linha][coluna];

    // Calcula a soma mínima para os dois caminhos possíveis
    int esquerda = menorsomadescisdaforcabruta(triangulo, linha + 1, coluna, tamanho);
    int direita = menorsomadescisdaforcabruta(triangulo, linha + 1, coluna + 1, tamanho);

    // Retorna o menor valor
    return triangulo[linha][coluna] + min(esquerda, direita);
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

    int menorsomadescisda = menorsomadescisdaforcabruta(triangulo, 0, 0, tamanho);
    printf("[Força Bruta] A menor soma é: %d\n\n", menorsomadescisda);

    return 0;
}