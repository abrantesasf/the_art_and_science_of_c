/* =============================================================================
 * Nome       : ex11 (ex11.c)
 * Descrição  : Calcula quantidade de kits, cats, sacks e wives
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
    int man, wives, sacks, cats, kits, total;

    man = 1;
    wives = man * 7;
    sacks = wives * 7;
    cats = sacks * 7;
    kits = cats * 7;
    total = man + wives + sacks + cats + kits;
    
    printf("%d man, %d wives, %d sacks, %d cats, %d kits = %d total.\n", man, wives, sacks, cats, kits, total);
    
    return 0;
}
