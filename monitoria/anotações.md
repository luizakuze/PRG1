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

# Perguntas

## Experiência com programação e monitoria. 🌼
Conheci a programação na segunda fase. Depois de um semestre turbulento, onde eu não sabia muito bem o que estava acontecendo no curso. Foi em programação 1 que entendi que estava no caminho certo. 

## Quais linguagens de programação você domina? 👓
C e C++ <br> Iniciando atualmente java. <br> Markdown 

## Como se mantém atualizado sobre últimas tendências e tecnologias na área de programação? 🐾
- Github Trending (por emails, às vezes chego a abrir mesmo no próprio github)
- Dev.to
- Email todos os dias - Filipe Deschamps

## Um aluno está com dificuldade para entender um conceito, o que fazer? 🌷
Procuro um exemplo prático, trazer pro cotidiano. Trazer a programação pro mundo físico, além do computador. Utilizar alguma analogia com algum outro conceito que o aluno já sabe. Incentivar ele a participar de uma discussão sobre o conceito.

## Você está com uma dúvida na programação, ao que vc recorre? 🦋
1) Se for sintaxe, a documentação da linguagem - no c++: `cplusplus.com`
2) Se for uma dúvida do conteúdo passado em aula, minhas próprias anotações markdown
3) Chatgpt para procurar uma nova função da linguagem

## Como você se prepara para conduzir uma sessão de monitoria? Quais são os passos que você segue? 📚
1) Vejo qual é a dúvida
2) Reviso os conceitos das aulas atuais
3) Relaciono o contéudo das aulas com o problema e como transcrever pra código
4) Recomendo exercícios adicionais

##  Além da parte técnica, como você acredita que pode contribuir para a formação dos alunos como futuros programadores? 🎇
Mostrar pro aluno que o computador é lindo, assim como a programação. Que às vezes temos ideias incríveis, mas nós humanos não somos capazes de executar ela com sua plenitude. Então, mostrar que você pode converter sua ideia em um código e fazer acontecer.

## O que seria um sucesso da sua monitoria? 💗
Engajamento do aluno e mostrar que entende o assunto. Ver um aluno que tinha bastante dúvidas e que talvez não gostasse tanto da matéria, convertido em um aluno com um melhor desempenho acadêmico.

Acolhimento do aluno, fazer ele entender que é normal ter dúvidas e achar difícil o curso. Mas que com o tempo ele vai se estabilizar.

## Por que seria você a melhor para a vaga? 🎆
Pois além de eu conseguir resolver a dúvida do aluno, vou querer que ele entenda essa ideia de mudar o mundo com a programação. Vou incentivar ele mesmo a ir mais longe, a tentar sempre estar um passo a frente da matéria. 

## Onde você se vê daqui 5 anos? 🎨
Trabalhando com um time de desenvolvedores em um projeto inovador. Estaria com profundo domínio das linguagens e ferramentar da área que eu escolher. <br>
Encontrar meu caminho na programação, se fala muito de frontend, backend.... Encontrar o meu lugar. <br>
Enxergo a possibilidade de trabalhar em um ambiente internacional.
