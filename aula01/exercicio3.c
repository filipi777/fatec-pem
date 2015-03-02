/*
 * Programação Estruturada Modular
 * Prof. Carlos Menezes
 * 
 * Exercício 3:
 * Ler 10 número e achar qual é o segundo maior elemento
 * Obs: Exercício de revisão, não utilizar vetor nem matriz
 */

#include <stdio.h>

int main()
{
    int n, maior, segMaior, i;
    
    printf("Entre com um número: ");
    scanf("%d", &maior);
    
    printf("Entre com um número: ");
    scanf("%d", &n);
    
    if(n > maior)
    {
        segMaior = maior;
        maior = n;
    } else {
        segMaior = n;
    }
    
    for(i = 0; 8 > i; i++)
    {
        printf("Entre com um número: ");
        scanf("%d", &n);
        
        if(n > maior)
        {
            segMaior = maior;
            maior = n;
        }else if(n > segMaior) {
            segMaior = n;
        }
    };
    
    printf("O segundo maior número é: %d \n", segMaior);
    printf("O maior número é: %d \n", maior);
    return 0;
}