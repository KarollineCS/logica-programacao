# 🧠 Explicações — Trabalho 1 de Lógica de Programação

Este arquivo apresenta as explicações das soluções implementadas para o Trabalho 1 da disciplina de Lógica de Programação.

---

## ✅ Questão 1: Conversão de temperaturas

O programa permite ao usuário escolher entre duas conversões:

- **Celsius para Fahrenheit**: aplica a fórmula `F = (9 * C / 5) + 32`
- **Fahrenheit para Celsius**: aplica a fórmula `C = 5 * (F - 32) / 9`

Fluxograma: 

### Lógica aplicada:
1. Um menu é exibido com as duas opções.
2. O usuário escolhe a conversão desejada.
3. O valor a ser convertido é solicitado.
4. O resultado é calculado e exibido.
5. O programa oferece a opção de repetir o processo.

Arquivo: `tb_questão_1.cpp`

---

## 💵 Questão 2: Caixa eletrônico com menor número de notas

O programa simula um caixa eletrônico que fornece apenas notas de 100, 10 e 5 unidades. Dado um valor a ser sacado, o programa calcula o **menor número possível de notas** de cada tipo.

Fluxograma:

### Lógica aplicada:
1. Recebe o valor desejado pelo usuário.
2. Divide o valor sucessivamente por 100, 10 e 5 para determinar a quantidade de cada nota.
3. Exibe o número de notas de cada tipo utilizadas.
4. Permite que o processo seja repetido.

Arquivo: `tb_questão_2.cpp`

---

## 🔢 Questão 3: Divisores de um número

O programa lê um número inteiro positivo e imprime todos os seus **divisores exatos**, ou seja, aqueles que resultam em divisão sem resto.

Fluxograma: 

### Lógica aplicada:
1. Solicita um número inteiro maior que zero.
2. Utiliza um laço `for` para verificar, de 1 até o número, se cada valor é divisor (resto da divisão é 0).
3. Exibe todos os divisores encontrados no terminal.

Arquivo: `tb_questão_3.cpp`

---
