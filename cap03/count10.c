/* =============================================================================
 * Nome       : count10 (count10.c)
 * Descrição  : Conta de 1 até 10
 *
 * Livro      : Este código foi criado com base em meu estudo do livro
 *            : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 3. Problem Solving
 * Seção      : 3.3. Control statements
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
    for (int i = 1; i <= 10; ++i)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
