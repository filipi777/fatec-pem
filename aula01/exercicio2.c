/*
 * Programação Estruturada Modular
 * Prof. Carlos Menezes
 * 
 * Exercício 2:
 * Calcular e mostrar o resultado da expressão:
 * 1/2 + 1/4 + 1/8 + 1/16 ... 1/1024 + 1/2048
 * Obs: Exercício de revisão, não utilizar vetor nem matriz
 */

#include <stdio.h>

int main()
{
    float resultado = 0.5;
    float soma = 0.5;
    int i;
    
    for(i =0; 1024 > i; i++)
    {
        resultado = resultado / 2;
        soma = soma + resultado;
    }
    printf("O resultado da expressão é %f\n", soma);
    return 0;
}
