/* =============================================================================
 * Nome       : ex05 (ex05.c)
 * Descrição  : Calcula o montante a partir de um capital e uma taxa anual de
 *            : juros, para um período de 2 anos.
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
    double principal, juros, montante;

    printf("%s", "Programa para cálculo de juros.\n");

    printf("%s", "Informe o saldo inicial: ");
    principal = GetReal();

    printf("%s", "Informe a taxa de juros anual (%): ");
    juros = GetReal();

    montante = principal + (principal * (juros/100));

    printf("O saldo após 1 ano será de %.2f.\n", montante);

    montante = montante + (montante * (juros/100));

    printf("O saldo após 2 anos será de %.2f.\n", montante);
    
    return 0;
}
