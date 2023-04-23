# Makefile para os programas do captíulo 2 (Learning by Example)
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
    hello \
    add2 \
    add2f \
    greeting \
    inchtocm \
    ave2f \
    cmtofeet

# ******************************************************************************
# Parâmetros para controlar a compilação

CC = gccx
CFLAGS = -std=c17

# ******************************************************************************
# Regra padrão: compila todos os programas

all: $(PROGRAMAS)

# ******************************************************************************
# Regras individuais de compilação

hello: hello.c
	$(CC) $(CFLAGS) -o hello hello.c

add2: add2.c
	$(CC) $(CFLAGS) -o add2 add2.c

add2f: add2f.c
	$(CC) $(CFLAGS) -o add2f add2f.c

greeting: greeting.c
	$(CC) $(CFLAGS) -o greeting greeting.c

inchtocm: inchtocm.c
	$(CC) $(CFLAGS) -o inchtocm inchtocm.c

ave2f: ave2f.c
	$(CC) $(CFLAGS) -o ave2f ave2f.c

cmtofeet: cmtofeet.c
	$(CC) $(CFLAGS) -o cmtofeet cmtofeet.c

# ******************************************************************************
# Regras para a limpeza final

limpar:
	rm -f *~ a.out core graphics.ps

zerar: limpar
	rm -f *.o *.a $(PROGRAMAS)

