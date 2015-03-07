
/*
 * Exemplo básico de função
 */

#include <stdio.h>

int soma(int a, int b)
{
    return a+b;
}

int main()
{
    int x, y, z;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &x);
    
    printf("Entre com outrp numero inteiro: ");
    scanf("%d", &y);
    
    z = soma(x, y);
    
    printf("\n A soma de %d com %d vale %d\n", x, y, z);
    return 0;
}