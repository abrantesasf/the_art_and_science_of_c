# Makefile para os programas do captíulo 3 (Problem Solving) do livro: The Art and
# Science of C: An Introduction to Computer Science, de Eric S. Roberts.
#
# Obs.: para que os códigos abaixo sejam compilados corretamente, é
# necessário que você tenha as bibliotecas específicas utilizadas neste
# livro e, mais especificamente, o script "gccx", que executará o compilador
# gcc fazendo uso das bibliotecas do livro. Para mais informações e instruções
# de instalação: https://github.com/abrantesasf/the_art_and_science_of_c
# ******************************************************************************

PROGRAMAS = \
    add10 \
    count10 \
    addlist \
    balance1 \
    balance2 \
    balance3

# ******************************************************************************
# Parâmetros para controlar a compilação

CC = gccx
CFLAGS = -std=c17 -Wall

# ******************************************************************************
# Regra padrão: compila todos os programas

all: $(PROGRAMAS)

# ******************************************************************************
# Regras individuais de compilação

add10: add10.c
	$(CC) $(CFLAGS) -o add10 add10.c

count10: count10.c
	$(CC) $(CFLAGS) -o count10 count10.c

addlist: addlist.c
	$(CC) $(CFLAGS) -o addlist addlist.c

balance1: balance1.c
	$(CC) $(CFLAGS) -o balance1 balance1.c

balance2: balance2.c
	$(CC) $(CFLAGS) -o balance2 balance2.c

balance3: balance3.c
	$(CC) $(CFLAGS) -o balance3 balance3.c

# ******************************************************************************
# Regras para a limpeza final

limpar:
	rm -f *~ a.out core graphics.ps

zerar: limpar
	rm -f *.o *.a $(PROGRAMAS)

