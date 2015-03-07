
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

int fatorial(int n)
{
    int calculo = 1, i;
    
    for(i=1; i<=n; i++)
    {
        calculo = calculo * i;
    }
    return calculo;
}

void fibonacci(int n)
{
    int i, a=1, b=1, c;
    if(n >= 1) printf("1 ");
    if(n >= 2) printf("1 ");
    for(i=3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
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
   
    printf("\n o fatorial de %d vale %d \n", x, fatorial(x));
    printf("\n Mostrando os %d primeiros numeros da sequencia de fibonacci \n", x);
    fibonacci(x);
    
    return 0;
}