# 🧠 Explicações - Lista 5 de Lógica de Programação

Este documento apresenta as explicações referentes às soluções desenvolvidas para os exercícios da **Lista 5** da disciplina ECOI02.1 - Lógica de Programação (UNIFEI).

---

## 🔢 Questão 1: Multiplicação de Matrizes com Ponteiros

O programa permite que o usuário informe a quantidade de linhas e colunas das matrizes A e B. A multiplicação de matrizes é realizada **utilizando ponteiros** e passagem de parâmetros.

### Etapas da lógica:

1. O programa verifica se o número de colunas da matriz A (`Na`) é igual ao número de linhas da matriz B (`Mb`), condição essencial para a multiplicação.

2. Matrizes A, B e C são alocadas dinamicamente com `malloc`.

3. O usuário preenche as matrizes A e B.

4. A função `Multiplo` é chamada para multiplicar as matrizes:
   - Para cada elemento `C[i][j]`, calcula-se a soma dos produtos `A[i][k] * B[k][j]`.

5. O resultado da multiplicação é exibido.

6. Por fim, a memória alocada é liberada para evitar vazamentos.

### Observações:
- O código faz uso de `system("cls")` para limpar o terminal entre etapas.
- As funções são bem separadas: leitura, impressão, alocação e liberação de memória.

Arquivo relacionado: `Questão 1.cpp`

---

## 📁 Questão 2: Ordenação de números inteiros em arquivo

O programa lê o nome de um arquivo texto (`questao2.txt`) e armazena nele uma sequência de números inteiros **aleatórios e ordenados**.

### Etapas da lógica:

1. Solicita ao usuário a quantidade de números que deseja gerar e armazenar.

2. Utiliza a função `rand()` para gerar os valores, armazenando-os em um vetor.

3. Ordena o vetor utilizando o algoritmo **Bubble Sort** (duas estruturas de repetição `for`).

4. Grava os números ordenados no arquivo utilizando `fstream` (modo `in/out/app`).

5. Reposiciona o ponteiro de leitura no início do arquivo (`seekp`) e imprime o conteúdo final no terminal.

### Observações:
- A ordenação ocorre antes da gravação no arquivo.
- O arquivo é atualizado com os números ordenados em uma única linha.

Arquivo relacionado: `Questão 2.cpp`

---

