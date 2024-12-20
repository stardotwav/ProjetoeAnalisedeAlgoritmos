#include <stdio.h>
#include <limits.h>

#define MAX 100

int min(int a, int b){
    return (a < b) ? a : b;
}

// Complexidade: 0(n^2)
int menorsomadescisdaprogramacaodinamica(int triangulo[][MAX], int tamanho) {
    int dp[MAX][MAX];

    // Inicializa a primeira linha da tabela DP com os valores do triângulo
    for (int i = 0; i < tamanho; i++) {
        dp[tamanho - 1][i] = triangulo[tamanho - 1][i];
    }

    // Calcula os valores da tabela DP de baixo para cima
    for (int i = tamanho - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = triangulo[i][j] + min(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }

    return dp[0][0];
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

    int menorsomadescisda = menorsomadescisdaprogramacaodinamica(triangulo, tamanho);
    printf("[Programação Dinâmica] A menor soma é: %d\n\n", menorsomadescisda);

    return 0;
}