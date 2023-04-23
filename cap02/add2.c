/* =============================================================================
 * Nome       : add2 (add2.c)
 * Descrição  : Retorna a soma de dois números inteiros
 * Livro      : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : 2.2. A program to add two numbers
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    int n1, n2, total;

    printf("%s", "Este programa retorna a soma de dois números inteiros.\n");

    printf("%s", "Informe o primeiro número inteiro: ");
    n1 = GetInteger();
    printf("%s", "Informe o segundo número inteiro: ");
    n2 = GetInteger();

    total = n1 + n2;

    printf("A soma de %d com %d é %d.\n", n1, n2, total);

    return 0;
}
