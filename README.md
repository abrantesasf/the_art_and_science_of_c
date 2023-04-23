# The Art and Science of C
Estudo do livro "**The Art and Science of C: An Introduction to Computer Science
(A Library-Based Introduction to Computer Science**", de Eric S. Roberts
(Addison-Wesley, 1995).

![Foto da cada do livro](https://raw.githubusercontent.com/abrantesasf/the_art_and_science_of_c/master/Roberts.CS1.C/book_cover.jpg)

Este livro é uma introdução aos **fundamentos da computação** e aos
**fundamentos da programação**, utilizando para isso a Linguagem C. É um livro
muito bem escrito, extremamente didático, que utiliza uma biblioteca de funções
especiais preparadas pelo próprio autor para facilitar a compreensão dos
conceitos fundamentais pelos estudantes.

Como é um livro bem antigo (foi publicado em 1995), começa a mostrar alguns
sinais do tempo (utiliza o padrão ANSI/C89). Mesmo assim é uma ótima referência
pois:

* Realmente ensina os fundamentos da computação;
* Realmente ensina os fundamentos da programação;
* E faz isso usando a Linguagem C; e
* Com o uso de uma biblioteca de funções facilitadoras que o autor preparou para
  que os estudantes não se percam nos detalhes da Linguagem C antes de entender
  os fundamentos e conceitos mais importantes.

Eu acredito que todo estudante de ciência da computação deve aprender C e
Lisp. Depois estuda outras linguagens conforme seu interesse e necessidade. 

Uma vantagem do livro ser antigo é que ele não é mais publicado e pode ser
encontrado em sebos por um preço bem em conta (algo como US$ 5,00).

Visite o site do autor, [Eric
S. Roberts](https://cs.stanford.edu/people/eroberts/), professor emérito de
computação na Universidade de Stanford.

## Sobre os códigos originais do livro
O servidor FTP original da editora Addison-Wesley, que distribuía os códigos
originais que acompanhavam o livro em 1995, não existe mais. Mesmo assim é
possível encontrar diversas fragmentos desses códigos espalhados pela Internet,
e foi isso que eu fiz: tentei juntar o máximo possível dos códigos originais do
livro e "recriei" a estrutura original do servidor FTP no diretório
`Roberts.CS1.C`.

Tenho bastante confiança de que os códigos disponibilizados estão praticamente
todos completos, com as seguintes exceções:

* Não tenho certeza de que o código do subdiretório `mac-think-c` está completo;
* Ainda não coloquei os códigos do diretório `simplified` (apesar desses códigos
  estarem impressos no próprio livro, o autor escreveu em um README que fez
  algumas pequenas alterações não refletidas no que foi impresso no
  livro). Ainda estou tentando encontrar esse código alterado pelo autor;
* Eu testei com sucesso os códigos dos diretórios `standard` e `unix-xwindows`;
  (estou usando a biblioteca do diretório `unix-xwindows`);
* Não testei os códigos para Mac ou PC (Borland ou Turbo).

Além dos códigos originais gerei versões em PDF dos arquivos README, para
facilitar a leitura e impressão.

## Sobre os códigos que estou reproduzindo
Apesar do livro utilizar ANSI/C89, estou reescrevendo os códigos utilizando a
última versão do padrão C, o [C17 (ISO/IEC
9899:2018)](https://www.iso.org/standard/74528.html).

Por enquanto, nenhum problema de compatibilidade surgiu e as bibliotecas que o
autor escreveu em 1995 foram compiladas com sucesso com o GCC 12.2. Criei
Makefiles com flags para a compilação com o C17.

**ATENÇÃO**: se você quiser utilizar as bibliotecas escritas pelo autor, terá
que seguir as instruções de instalação que estão nos arquivos README do
diretório `Roberts.CS1.C`. É absolutamente crucial que você compile as
bibliotecas e que você utilize o script **gccx** que será gerado nesse processo
para compilar os programas que você criar com essas bibliotecas.

Esse projeto é de longo prazo, vou recriar os programas em meu tempo livre.
