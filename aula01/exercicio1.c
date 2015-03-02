/*
 * Programação Estruturada Modular
 * Prof. Carlos Menezes
 * 
 * Exercício 1:
 * Ler 10 números e calcular a média aritimética simples, o maior e o menor
 * elemento desta coleção.
 * Obs: Exercício de revisão, não utilizar vetor nem matriz
 */

#include <stdio.h>

int main()
{
    // Declaração de variáveis
    int maior, menor, media, i, n, soma = 0;
    
    printf("Entre com a nota: \n");
    scanf("%d", &maior);
    soma = soma + maior;
    printf("Entre com a nota: \n");
    scanf("%d", &menor);
    soma = soma + menor;
    if(maior < menor)
    {
        n = maior;
        maior = menor;
        menor = n;
    };
    for(i=0; i < 8; i++) 
    {
        printf("Entre com a nota: \n");
        scanf("%d", &n);
        soma = soma + n;
        if(n > maior) {
            maior = n;
        }
        else if( n < menor)
        {
            menor = n;
        }
    };
    media = soma / 10;
    printf("A média das notas é: %d \n", media);
    printf("A maior nota é: %d \n", maior);
    printf("A menor nota é: %d \n", menor);
    return 0;
}

