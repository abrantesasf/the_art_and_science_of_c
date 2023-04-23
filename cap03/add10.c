/* =============================================================================
 * Nome       : add10 (add10.c)
 * Descrição  : Retorna a soma de 10 inteiros informados pelo usuário.
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
#include "simpio.h"

int main(void)
{
    int total = 0;

    printf("%s", "Calcula a soma de 10 números inteiros.\n");

    for (int i = 0; i < 10; ++i)
    {
        printf("Informe o %dº número: ", i + 1);
        total += GetInteger();
    }

    printf("A soma dos números informados é: %d.\n", total);
    
    return 0;
}
