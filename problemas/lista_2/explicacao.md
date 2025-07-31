# 🧠 Explicações - Lista 2 de Lógica de Programação

Este arquivo reúne as explicações das soluções desenvolvidas para os exercícios da **Lista 2** da disciplina ECOI02.1 - Lógica de Programação (UNIFEI).

---

## ✅ Questão 1: Cálculo com raio de uma esfera

O programa solicita que o usuário informe o valor do raio de uma esfera e, a partir disso, calcula:

- **Comprimento da circunferência**: `C = 2 * π * R`
- **Área da superfície da esfera**: `A = π * R²`
- **Volume da esfera**: `V = (4 * π * R³) / 3`

### Lógica aplicada:
1. Verifica se o valor informado para o raio é maior que zero.
2. Se o valor for inválido, solicita a entrada novamente.
3. Realiza os três cálculos e exibe os resultados no terminal com formatação adequada.

Arquivo relacionado: `questao_1.cpp`

---

## 🔺 Questão 2: Classificação de triângulos

O programa solicita dois ângulos internos de um triângulo e realiza as seguintes operações:

- **Cálculo do terceiro ângulo**: `a3 = 180 - (a1 + a2)`
- **Classificação por lados**, com base na igualdade dos ângulos:
  - **Equilátero**: todos os ângulos iguais
  - **Isósceles**: dois ângulos iguais
  - **Escaleno**: todos diferentes
- **Classificação por ângulos internos**:
  - **Retângulo**: um dos ângulos é exatamente 90°
  - **Obtuso**: um dos ângulos é maior que 90°
  - **Agudo**: todos os ângulos são menores que 90°

### Lógica aplicada:
1. Solicita dois ângulos e valida se ambos são maiores que zero.
2. Calcula o terceiro ângulo.
3. Classifica o triângulo com base nos critérios acima.
4. Exibe a categoria do triângulo no terminal.

Arquivo relacionado: `questao_2.cpp`

---

## 🚗 Questão 3: Cálculo do custo final de um carro

O programa solicita o **custo de fábrica** de um carro e calcula o valor final ao consumidor, considerando:

- **Comissão do distribuidor**
- **Impostos**

Ambos os valores são definidos com base em faixas do custo de fábrica:

| Faixa de Custo         | Comissão (%) | Imposto (%) |
|------------------------|--------------|--------------|
| Até R$ 12.000,00       | 5%           | 0%           |
| De R$ 12.000,01 a R$ 25.000,00 | 10%          | 15%          |
| Acima de R$ 25.000,00  | 15%          | 20%          |

### Lógica aplicada:
1. Solicita o custo de fábrica e valida se o valor é maior que zero.
2. Com base na faixa correspondente, calcula comissão e imposto.
3. Soma os valores para determinar o preço final ao consumidor.
4. Exibe cada valor e o total no terminal.

Arquivo relacionado: `questao_3.cpp`

---

