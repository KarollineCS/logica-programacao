# 🧠 Explicações - Lista 3 de Lógica de Programação

Este arquivo reúne as explicações das soluções desenvolvidas para os exercícios da **Lista 3** da disciplina ECOI02.1 - Lógica de Programação (UNIFEI).

---

## ✅ Questão 1: Operações com vetores

O programa solicita o tamanho `n` dos vetores e permite ao usuário escolher uma entre quatro operações:

- **Adição**: soma elemento a elemento entre dois vetores.
- **Subtração**: subtrai os elementos do segundo vetor dos correspondentes no primeiro.
- **Módulo (Norma)**: calcula a raiz quadrada da soma dos quadrados dos elementos de um único vetor.
- **Produto escalar**: soma dos produtos dos elementos correspondentes dos dois vetores.

Cada operação está implementada em uma função separada, promovendo organização e modularização do código.

Arquivo: `questao_1.cpp`

---

## 🧮 Questão 2: Potência sem função pronta

A proposta é calcular a potência `x^y` sem usar `pow` ou outras funções nativas.

### Lógica aplicada:
- Se `y < 0`, o programa avisa e encerra.
- Se `y == 0`, retorna 1 (qualquer número elevado a zero é 1).
- Para `y > 0`, utiliza um laço `for` que multiplica `x` por si mesmo `y` vezes.

Arquivo: `questao_2.cpp`

---

## 🔢 Questão 3: Soma de pares e ímpares

O programa lê `n` elementos inteiros e utiliza uma função para:

- Identificar se cada elemento é par ou ímpar;
- Acumular separadamente a soma e a quantidade de números pares e ímpares.

Essas informações são exibidas ao final da execução.

Arquivo: `questao_3.cpp`

---

## 🔁 Questão 4: Contagem de ocorrências

Este programa:

1. Lê uma sequência de `n` números reais.
2. Compara cada elemento com todos os demais para contar quantas vezes ele aparece.
3. Exibe o valor e sua quantidade de ocorrência.

**Nota:** o código atual exibe a contagem repetidamente para valores iguais — isso pode ser melhorado com controle de duplicidade, mas atende ao propósito básico da questão.

Arquivo: `questao_4.cpp`

---

