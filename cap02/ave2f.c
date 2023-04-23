/* =============================================================================
 * Nome       : ave2f (ave2f.c)
 * Descrição  : Este programa calcula a média de dois números reais.
 * Livro      : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : 2.5. Expressions
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    double r1, r2, media;
    
    printf("%s", "Este programa calcula a média de 2 números reais.\n");

    printf("%s", "Informe o primeiro número real: ");
    r1 = GetReal();

    printf("%s", "Informe o segundo número real: ");
    r2 = GetReal();

    media = (r1 + r2) / 2;

    printf("A média entre %.2f e %.2f é %.2f.\n", r1, r2, media);
    
    return 0;
}
