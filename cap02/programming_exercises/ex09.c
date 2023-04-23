/* =============================================================================
 * Nome       : ex09 (ex09.c)
 * Descrição  : Converte kg em pounds e ounces.
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
    double kg, ounce;
    int pound;

    printf("%s", "Converte kg para pounds e ounces.\n");

    printf("%s", "Informe o peso em kg: ");
    kg = GetReal();

    /* Fatores de conversão:
       1 kg    =  2.2 pounds
       1 pound = 16.0 ounces
    */
    pound = kg * 2.2;                     /* mantém apenas a parte inteira dos pounds */
    ounce = ((kg * 2.2) - pound) * 16;    /* obtém a fração de pound e calcula ounces */

    printf("%.2f kg é igual a %d pound(s) e %.2f ounce(s).\n", kg, pound, ounce);
    
    return 0;
}
