/* =============================================================================
 * Nome       : inchtocm (inchtocm.c)
 * Descrição  : Converte um valor em polegadas para centímetros
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
    double inch, cm;

    printf("%s", "Este programa converte polegadas para centímetros.\n");

    printf("%s", "Informe o comprimento em polegadas: ");
    inch = GetReal();

    cm = inch * 2.54;

    printf("%.2f polegada(s) equilave(m) a %.2f centímetro(s).\n", inch, cm);
    
    return 0;
}
