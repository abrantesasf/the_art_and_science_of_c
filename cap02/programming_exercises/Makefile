# Makefile para os "programming exercises" do captíulo 2 (Learning by Example)
# do livro: The Art and Science of C: An Introduction to Computer Science,
# de Eric S. Roberts.
#
# Obs.: para que os códigos abaixo sejam compilados corretamente, é
# necessário que você tenha as bibliotecas específicas utilizadas neste
# livro e, mais especificamente, o script "gccx", que executará o compilador
# gcc fazendo uso das bibliotecas do livro. Para mais informações e instruções
# de instalação: https://github.com/abrantesasf/the_art_and_science_of_c
# ******************************************************************************

PROGRAMAS = \
    ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 ex09 ex10 ex11

# ******************************************************************************
# Parâmetros para controlar a compilação

CC = gccx
CFLAGS = -std=c17

# ******************************************************************************
# Regra padrão: compila todos os programas

all: $(PROGRAMAS)

# ******************************************************************************
# Regras individuais de compilação

ex01: ex01.c
	$(CC) $(CFLAGS) -o ex01 ex01.c

ex02: ex02.c
	$(CC) $(CFLAGS) -o ex02 ex02.c

ex03: ex03.c
	$(CC) $(CFLAGS) -o ex03 ex03.c

ex04: ex04.c
	$(CC) $(CFLAGS) -o ex04 ex04.c

ex05: ex05.c
	$(CC) $(CFLAGS) -o ex05 ex05.c

ex06: ex06.c
	$(CC) $(CFLAGS) -o ex06 ex06.c

ex07: ex07.c
	$(CC) $(CFLAGS) -o ex07 ex07.c

ex08: ex08.c
	$(CC) $(CFLAGS) -o ex08 ex08.c

ex09: ex09.c
	$(CC) $(CFLAGS) -o ex09 ex09.c

ex10: ex10.c
	$(CC) $(CFLAGS) -o ex10 ex10.c

ex11: ex11.c
	$(CC) $(CFLAGS) -o ex11 ex11.c

# ******************************************************************************
# Regras para a limpeza final

limpar:
	rm -f *~ a.out core graphics.ps

zerar: limpar
	rm -f *.o *.a $(PROGRAMAS)

