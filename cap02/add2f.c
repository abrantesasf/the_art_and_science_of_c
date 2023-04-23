/* =============================================================================
 * Nome       : add2f (add2f.c)
 * Descrição  : retorna a soma de dois números reais (ponto flutuante)
 * Livro      : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : 2.4. Data types
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    double n1, n2, total;

    printf("%s", "Este programa retorna a soma de dois números reais.\n");

    printf("%s", "Informe o primeiro número real: ");
    n1 = GetReal();
    printf("%s", "Informe o segundo número real: ");
    n2 = GetReal();

    total = n1 + n2;

    printf("A soma de %.2f e %.2f é %.2f.\n", n1, n2, total);
    
    return 0;
}
