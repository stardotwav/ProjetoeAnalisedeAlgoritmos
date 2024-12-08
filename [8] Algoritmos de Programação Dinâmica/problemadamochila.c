#include <stdio.h>

// função auxiliar para preencher a matriz de programação
// dinâmica
int max(int a, int b){
    return (a > b) ? a : b;
}

void programacaoDinamica(int valores[], int pesos[], int n, int W){
    int pd[n+1][W+1];

    // a matriz de programação dinâmica é preenchida de acordo com os pesos
    // em que se os indices forem 0, sera acrescentado o valor zero na posição
    // caso contrário, iremos verificar se o peso é menor do que o peso atual
    // se sim, inserimos o maior valor entre a posição atual e as anteriores
    for(int i=0; i<=n; i++){
        for(int w=0; w<=W; w++){
            if(i == 0 || w == 0) pd[i][w] = 0;
            else if(pesos[i-1] <= w) pd[i][w] = max(valores[i-1] + pd[i-1][w - pesos[i-1]], pd[i-1][w]);
            else pd[i][w] = pd[i-1][w];
        }
    }

    printf("-- Valor Máximo de Valor: %d --\n", pd[n][W]);
    printf("-- Caminho: ");
    
    int x[n+1];
    for(int i=0; i<=n; i++) x[i] = 0;
    int i=n;
    int j=W;

    // para percorrer a matriz de programação dinâmica e imprimir os itens
    // utilizados, verificamos a posição atual com i-1, e caso seja diferente
    // imprimimos o i atual, e subtraimos em j o valor do peso atual, visto
    // que não podemos mais utilizar de itens com aquele peso
    while(1>0){
        if(i == 0 || j == 0) break;
        if(pd[i][j] != pd[i-1][j]){
            printf("%d ", i);
            i--;
            j = j - pesos[i];
        } else{
            i--;
        }
    }

    printf("--\n");
}

int main(){
    int pesos[] = {3, 2, 1, 4, 5};
    int valores[] = {25, 20, 15, 40, 50};
    int W = 6;
    int n = sizeof(valores) / sizeof(valores[0]);

    programacaoDinamica(valores, pesos, n, W);
}