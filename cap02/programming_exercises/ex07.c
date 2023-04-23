/* =============================================================================
 * Nome       : ex07 (ex07.c)
 * Descrição  : Programa de conversão de Fahrenheit para Celsius
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
    double cel, fah;

    printf("%s", "Converte uma temperatura em Fahrenheit (ºF) para Celsius (ºC).\n");

    printf("%s", "Informe a temperatura em Fahrenheit (ºF): ");
    fah = GetReal();

    /* Cuidado com a divisão 5/9: se a divisão foi feita como inteiro,
       todas as conversões serão calculadas como 0 (zero), pois a divisão
       5/9 retorna um inteiro que é o 0 (zero).
    */
    cel = (5.0/9.0) * (fah - 32);

    printf("%.2f ºF correspondem à %.2f ºC.\n", fah, cel);
    
    return 0;
}
