# ♟️ Movimentação das Peças de Xadrez

Projeto feito em C pra simular os movimentos das peças do xadrez.  
Fiz em três partes (níveis), cada um com um tipo diferente de estrutura e dificuldade maior.

---

## 🧩 Nível Novato
Primeira parte do projeto. Aqui usei os três tipos básicos de repetição pra fazer as peças se moverem.

**Peças e estruturas usadas:**
- Torre → `for`
- Bispo → `while`
- Rainha → `do-while`

Arquivo: `NOVATO.c`

---

## ⚙️ Nível Aventureiro
Nesse nível o desafio foi usar **loops aninhados** (um dentro do outro).  
Usei isso pra simular o movimento em “L” do cavalo.

**Peça:**
- Cavalo → movimento em L com `for` + `while`

Arquivo: `AVENTUREIRO.c`

---

## 👑 Nível Mestre
Última parte. Aqui entrei em recursividade e loops mais complexos.  
Transformei as peças em funções recursivas e deixei o cavalo mais avançado, com várias condições e controle com `continue` e `break`.

**Peças e técnicas:**
- Torre → recursiva  
- Bispo → recursiva + loops aninhados  
- Rainha → recursiva  
- Cavalo → loops complexos  

Arquivo: `MESTRE.c`

---

## 💬 Sobre o projeto
- Os movimentos estão definidos direto no código.  
- Tudo foi feito usando `printf` pra mostrar os passos no console.  
- Cada parte tá em um arquivo separado pra ficar organizado.

---

Feito por **Camilo José da Silva de Santana**  
Curso: **Engenharia de Software**  
Atividade: **Desafio — Movimentação das Peças de Xadrez**  
Linguagem: **C**
