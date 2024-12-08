# [8] Algoritmos de Programação Dinâmica
A programação dinâmica é uma técnica para resolver problemas com subproblemas sobrepostos. Nessa técnica, ao invés de resolver subproblemas sobrepostos várias vezes, a programação dinâmica sugere resolver cada um dos subproblemas menores apenas uma vez e registrar os resultados em uma tabela, a partir da qual podemos obter uma solução para o problema original. Abaixo está descrito os problemas implementados.

#### 🟣 Fibonacci

🚧 Em construção

#### 🟣 Fila de Moedas

🚧 Em construção

#### 🟣 Troca de Dinheiro

🚧 Em construção

#### 🟣 Coleta de Moedas

🚧 Em construção

#### 🟣 Problema da Mochila
Este problema deve determinar o valor máximo que pode ser obtido ao escolher itens para colocar em uma mochila com capacidade limitada, considerando seus pesos e valores.
Como solução é utilizada de uma matriz auxiliar, que tem suas colunas representando os pesos possíveis de serem levados na mochila, e suas linhas o número de itens, de forma que cada linha representa a inserção de um novo item da lista de itens. A partir disso, tem-se que a primeira linha e coluna são preenchidos com o valor 0, e nos casos que o número da posição J for menor o peso na posição I da lista o valor é definido pela equação DP(i-1, j). Nos demais casos o valor é definido pela equação:  
```
DP(i,j) = max(DP(i - 1, j), valores[i] + DP(i - 1, j - pesos[i]))
```

#### 🟣 Menor Soma de Descida
Este problema leva em consideração um triângulo de números, onde cada número está em uma linha, e as linhas formam um triângulo equilátero. O objetivo é encontrar o caminho com a menor soma total, começando do topo do triângulo e descendo até a base, sempre escolhendo um número adjacente na linha abaixo. Para essa solução foram desenvolvidas três soluções: (1) usando força bruta, foi pensando em um algoritmo recursivo, que realiza duas chamadas: uma para verificar o valor da soma com a posição diagonal esquerda e com a soma da diagonal direita; (2) usando algoritmo guloso, leva em consideração uma escolha local, onde ela irá comparar os dois números diagonais da próxima linha e escolhe o menor entre eles, e ao final atualiza sua coluna; (3) usando programação dinâmica, usando da matriz de programação dinâmica, são salvos a menor soma entre um elemento e seus adjacentes, sendo tais somas feitas de baixo para cima, seguindo a seguinte equação: 
```
DP[i][j] = triangulo[i][j] + min(DP[i + 1][j], DP[i + 1][j + 1])
```