/* =============================================================================
 * Nome       : ex10 (ex10.c)
 * Descrição  : Calcula a média de 4 inteiros
 * Livro      : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : Programming Exercises
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main (void)
{
    int n1, n2, n3, n4;
    double media;

    printf("%s", "Calcula a média de 4 números inteiros.\n");

    printf("%s", "Informe o 1º número inteiro: ");
    n1 = GetInteger();

    printf("%s", "Informe o 2º número inteiro: ");
    n2 = GetInteger();

    printf("%s", "Informe o 3º número inteiro: ");
    n3 = GetInteger();

    printf("%s", "Informe o 4º número inteiro: ");
    n4 = GetInteger();

    media = (n1 + n2 + n3 + n4) / 4.0;

    printf("A média entre %d, %d, %d e %d é %.2f.\n", n1, n2, n3, n4, media);
    
    return 0;
}
