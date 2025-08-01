# 🧠 Explicações - Lista 4 de Lógica de Programação

Este arquivo contém as explicações das soluções implementadas para os exercícios da **Lista 4** da disciplina ECOI02.1 - Lógica de Programação (UNIFEI).

---

## 🟦 Questão 1: Manipulação de matriz 10x10

O programa cria uma matriz 10x10 preenchida com valores aleatórios de 0 a 29. Em seguida, realiza:

1. **Troca da segunda linha pela oitava coluna**:
   - Elementos da linha 1 são trocados com os da coluna 7 (ajuste de índice).
2. **Troca da quarta coluna pela décima linha**:
   - Elementos da coluna 3 são trocados com os da linha 9.
3. A troca das **diagonais** foi mencionada no enunciado, mas ainda **não está implementada no código**.

Arquivo: `Q1L4.cpp`

---

## 📅 Questão 2: Agenda de compromissos

O programa define uma estrutura `Agenda` com um `compromisso` e uma `data`, que por sua vez possui `dia`, `mês` e `ano`.

### Funcionalidades:
- O usuário pode cadastrar até 50 compromissos.
- Após os cadastros, o sistema permite informar um **mês e ano** para exibir os compromissos que ocorrem nesse período.
- Se o usuário informar um mês inválido (fora de 1–12), uma nova solicitação é feita.

Arquivo: `Q2L4.cpp`

---

## ❌ Questão 3: Jogo da Velha

Este programa implementa um **jogo da velha simples**, com as seguintes características:

- Usa uma matriz 3x3 de caracteres, inicialmente preenchida com `'-'`.
- O usuário insere a linha e coluna onde deseja jogar, e depois o caractere (`X` ou `O`).
- Após cada jogada, o estado do tabuleiro é exibido.
- Após preencher a matriz, o usuário pode escolher jogar novamente.

**Observação**: o jogo não implementa regras de vitória ou empate — ele apenas permite a marcação de posições.

Arquivo: `Q3L4.cpp`

---

