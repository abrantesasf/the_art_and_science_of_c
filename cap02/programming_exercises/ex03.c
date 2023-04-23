/* =============================================================================
 * Nome       : ex03 (ex03.c)
 * Descrição  : Este programa converte de pés e polegadas para centímetros.
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
    int pe;
    double cm, pol;

    printf("%s", "Este programa converte de pés e polegadas para centímetros.\n");

    printf("%s", "Informe a quantidade de pés: ");
    pe = GetReal();

    printf("%s", "Informe a quantidade de polegadas: ");
    pol = GetReal();

    /* Cada pé tem 12 polegadas, e cada polegada tem 2.54 cm. */
    cm = (pe * 12) * 2.54 + (pol * 2.54);

    printf("%d pé(s) e %.2f polegada(s) são %.2f centímetro(s).\n", pe, pol, cm);
    
    return 0;
}
