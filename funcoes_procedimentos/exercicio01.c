
/*
 * Exemplo básico de função
 */

#include <stdio.h>

int soma(int a, int b)
{
    return a+b;
}

float potenciacao(float base, int expoente)
{
    int i, moduloExpoente;
    float calculo = 1;
    
    moduloExpoente = expoente;
    if(expoente < 0)
    {
        moduloExpoente = -expoente;
    }
    
    for(i=1; i<=moduloExpoente; i++)
    {
        calculo = calculo * base;
    }
    
    if(expoente < 0)
    {
        return 1/calculo;
    }
    return calculo;
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
    
    printf("\n%d elevado a %d vale %.2f\n", x, y, potenciacao(x, y));
    return 0;
}