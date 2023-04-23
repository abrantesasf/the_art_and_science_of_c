/* =============================================================================
 * Nome       : ex02 (ex02.c)
 * Descrição  : Calcula a área de um triângulo, a partir da base e altura
 *            : informados pelo usuário.
 * Livro      : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : Programming Exercises
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    /* Variáveis para o cálculo da área de um triângulo:
       b = base; h = altura; a = área
    */
    double b, h, a;

    printf("%s", "Calcula a área de um triângulo a partir da base (b) e altura (h).\n");

    printf("%s", "Informe a base do triângulo: ");
    b = GetReal();

    printf("%s", "Informe a altura do triângulo: ");
    h = GetReal();

    /* Área do triângulo: (base x altura)/2 */
    a = (b * h) /2;

    printf("A área do triângulo é de %.2f.\n", a);
    
    return 0;
}
