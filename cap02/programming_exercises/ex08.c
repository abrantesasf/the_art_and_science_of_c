/* =============================================================================
 * Nome       : ex08 (ex08.c)
 * Descrição  : Verifica o valor de uma expressão matemática.
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

int main(void)
{
    /* 4 + 9 - 2 * 16 + 1 / 3 * 6 - 67 + 8 * 2 - 3 + 26 - 1 / 34 + 3 / 7 + 2 - 5
       4 + 9 - 32 + (1/3) * 6 - 67 + 16 - 3 + 26 - (1/34) + (3/7) + 2 - 5
       4 + 9 - 32 + 0 * 6 - 67 + 16 - 3 + 26 - 0 + 0 + 2 - 5
       4 + 9 - 32 - 67 + 16 - 3 + 26 + 2 - 5
       -50
    */
    printf("%d\n", 4 + 9 - 2 * 16 + 1 / 3 * 6 - 67 + 8 * 2 - 3 + 26 - 1 / 34 + 3 / 7 + 2 - 5);
    
    return 0;
}
