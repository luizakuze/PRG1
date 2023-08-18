# Desafios

## Imprimir 'Hello World' sem utilizar ';' 🦋

```c
int main() {
  if (printf("Hello World")) {}
  return 0;
}
```

## Fazer o swap de duas variáveis sem criar uma terceira 🌹

```c
int main() {
  int a = 2;
  int b = 10;

  a = a + b;
  b = a - b;
  a = a - b;
}
```

# Conteúdo

## O que é um array e por que utilizar? 🌷

### O que é:
É uma forma de armazenar valores na memória de maneira contínua.

### Vantagens:
- Acesso eficiente;
- Fácil manipulação;
- Trabalhar com um grande conjunto de dados.

## Quando utilizar o do-while? 🐝
Quando quiser que a ação seja feita antes de verificar se a condição do while é verdadeira.

## É possível um ponteiro apontar para um ponteiro? 🐛
Sim, é possível.

```c
int main() {
    int a = 2;
    int b = 10;
    int *ptr = &b;
    int **ptr2 = &ptr;

    **ptr2 = 2;

    printf("%d", b);

    return 0;
}
```
## Qual a diferença entre `#include <...>` e `#include "..."` 🐢
Com aspas duplas significa pro pré-compilador que ele vai procurar esse arquivo dentro do próprio diretório atual,
já com "<>" significa que vai ser procurado em diretórios pré-designados pelo compilador.

## Diferença de variável global para variável estática 🎈
A variável global é declarada fora de qualquer função e pode ser chamada em qualquer parte do código. Já a varia´vel estática é declarada
dentro de uma função e seu uso se restringe a essa própria função.
É bom evitar variáveis globais, pois quando ela é modificada em várias partes do código podem ocorrer alguns bugs.

## Por que é bom dividir o código em funções? ☔
- Legibilidade;
- Permite reutilização do código;
- Facilita a manutenção.

## Matrizes e vetores como parâmetros 📊
Em C, vale relembrar que os vetores e matrizes já são passados por referência como parâmetros. <br> Não é necessário o * e &.
