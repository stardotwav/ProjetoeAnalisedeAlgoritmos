# Projeto e Analise de Algoritmos
Neste repositório é apresentado o material desenvolvido como base para os estudos da disciplina "Projeto e Análise de Algoritmos" (INF 630), cursada durante o meu doutorado em ciência da computação na UFV campus Florestal. Abaixo está listado os conteúdos já disponíveis no repositório para consulta.

### [1] Introdução à Análise de Algoritmos

🚧 Em construção

### [2] Análise de Algoritmos

🚧 Em construção

### [3] Projeto de Algoritmos por Indução

🚧 Em construção

### [4] Algoritmos para Sequência de Dados

🚧 Em construção

### [5] Grafos

🚧 Em construção

### [6] Algoritmos Gulosos

🚧 Em construção

### [7] Algoritmos de Divisão e Conquista

🚧 Em construção

### [8] Algoritmos de Programação Dinâmica
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
Como solução é utilizada de uma matriz auxiliar, que tem suas colunas representando os pesos possíveis de serem levados na mochila, e suas linhas o número de itens, de forma que cada linha representa a inserção de um novo item da lista de itens. A partir disso, tem-se que a primeira linha e coluna são preenchidos com o valor 0, e nos casos que o número da posição J for menor o peso na posição I da lista o valor é definido pela equação DP(i-1, j). Nos demais casos o valor é definido pela equação DP(i,j) = max(DP(i - 1, j), valores[i] + DP(i - 1, j - pesos[i])).

### [9] Trabalho Prático

🚧 Em construção