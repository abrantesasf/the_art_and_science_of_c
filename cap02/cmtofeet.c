/* =============================================================================
 * Nome       : cmtofeet (cmtofeet.c)
 * Descrição  : Este programa converte um comprimento em cm para o equivalente
 *            : em pés (1 pé = 12 polegadas) e polegadas.
 *
 * Livro      : Este código foi criado com base em meu estudo do livro
 *            : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : 2.5. Expressions
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
    double cm, inch;
    int feet;
    
    printf("%s", "Este programa converte um comprimento em cm para pés e polegadas.\n");

    printf("%s", "Informe o valor em cm: ");
    cm = GetReal();

    feet = (cm / 2.54) / 12;           /* Obtém número de polegadas e divide por 12 para pés. */
    inch = (cm / 2.54) - (feet * 12);  /* Obtém o total de polegadas e subtrai as polegadas dos pés. */

    printf("%.2f cm é igual a %d pé(s) e %.2f polegada(s).\n", cm, feet, inch);

    return 0;
}
