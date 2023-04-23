/* =============================================================================
 * Nome       : balance3 (balance3.c)
 * Descrição  : Terceira versão de um programa para conferir o extrato bancário
 *            : de um usuário. O usuário digita as depósitos e cheques emitidos
 *            : durante o mês (retiradas são digitadas como valores negativos).
 *            : Para terminar a digitação, o usuário entra com 0 (zero).
 *            : Esta vertão CORRIGIU O BUG PROPOSITAL da versão anterior.
 * Livro      : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 3. Problem Solving
 * Seção      : 3.3. Control statements
 * =============================================================================
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(void)
{
    double saldo, temp;
    saldo = temp = 0.0;

    printf("%s", "Este programa auxilia o controle mensal de suas contas.\n");
    printf("%s", "Informe todos os depósitos e cheques emitidos durante o mês.\n");
    printf("%s", "Indique um cheque emitido usando um sinal de menos.\n");
    printf("%s", "Para terminar, entre 0 (zero).\n");
    printf("%s", "Informe o saldo inicial: ");
    saldo = GetReal();

    while (TRUE)
    {
        printf("%s", "Entre com um cheque emitido (-) ou um depósito: ");
        temp = GetReal();
        if (temp == 0) break;
        saldo += temp;
        if (temp < 0 && saldo < 0)
        {
            printf("Este cheque não tem fundos! Uma taxa de $10.00 será cobrada.\n");
            saldo -= 10;
        }
        printf("O saldo até o momento é de: %.2f\n", saldo);
    }

    printf("O saldo final é de: %.2f\n", saldo);
    
    return 0;
}
