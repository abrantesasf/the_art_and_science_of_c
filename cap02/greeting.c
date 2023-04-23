/* =============================================================================
 * Nome       : greeting (greeting.c)
 * Descrição  : Obtém o nome de alguém e retorna uma saudação simples.
 *
 * Livro      : Este código foi criado com base em meu estudo do livro
 *            : "The Art and Science of C: An Introduction to Computer Science",
 *            : de Eric S. Roberts (Addison-Wesley, 1995).
 * Capítulo   : 2. Learning by Example
 * Seção      : 2.4. Data types
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
    string nome;

    printf("Qual é o seu nome? ");
    nome = GetLine();

    printf("Olá, %s!\n", nome);
    
    return 0;
}
