/* =============================================================================
 * Nome       : addlist (addlist.c)
 * Descrição  : Programa para somar uma lista com um número não definido de
 *            : números. A soma é terminada quando um valor sentinela é
 *            : digitado pelo usuário.
 *
 * Livro      : Este código foi criado com base em meu estudo do livro
 *            : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 
 * Seção      : 
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
    int total, temp;
    total = temp = 0;

    printf("%s", "Este programa adiciona uma lista de números.\n");
    printf("%s", "Indique o término da lista com um 0 (zero).\n");

    while (TRUE)
    {
        printf("%s", "Informe um número inteiro: ");
        temp = GetInteger();
        if (temp == 0)
            break;
        total += temp;
    }

    printf("A soma de todos os números é: %d.\n", total);
    
    return 0;
}
