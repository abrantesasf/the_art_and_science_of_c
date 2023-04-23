/* =============================================================================
 * Nome       : ex06 (ex06.c)
 * Descrição  : Calcula a área de um círculo, dado o raio.
 *
 * Livro      : Este código foi criado com base em meu estudo do livro
 *            : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : Programming Exercises
 *
 * Autor      : Abrantes Araújo Silva Filho
 *            : abrantesasf@pm.me
 *
 * C Standard : C17
 * Versão     : 
 * Copyright  : 
 * Observação :
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    double r, a;
    const double PI = 3.14159;

    printf("%s", "Calcula a área de um círculo, dado seu raio.\n");

    printf("%s", "Informe o raio do círculo: ");
    r = GetReal();

    a = PI * (r * r);

    printf("A área do círculo de raio %.2f é %.2f.\n", r, a);
    
    return 0;
}
