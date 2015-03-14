#include <stdio.h>
#include <string.h>

int calculaResto(int soma)
{
    int digitoVerificador;
    int resto = 0;
    resto = soma % 11; // MOD em C escreve-se %
    if(resto < 2)
       digitoVerificador = 0;
    else
       digitoVerificador = 11 - resto;
    
    return digitoVerificador;
}

int calculaDigitos(int digitoVerificador, int cpf[], int multiplicador[])
{
    int k = 8, i = 0, calc = 0;
    if(digitoVerificador == 2)
    {
        k = 9;
    }
    
    calc = 0;
    for(i=0; i<=k; i++)
    {
        calc += multiplicador[i] * cpf[i]; 
    }
    return calc;
          
}

int main()
{
	int cpf[11];
	int multiplicadores1[]={10,9,8,7,6,5,4,3,2};
	int multiplicadores2[]={11,10,9,8,7,6,5,4,3,2};
	int i, soma, resto, digitoVerificador, digitoVerificador1, digitoVerificador2;
        
	//Entrada de dados
	printf("\nEntre com os digitos de seu CPF, separados por ENTER: ");
	for(i=0; i<=10; i=i+1)
	{
	   scanf("%d", &cpf[i]);
	}
        
        // Calcula primeiro digito;
        soma = calculaDigitos(1, cpf, multiplicadores1);
        digitoVerificador1 = calculaResto(soma);
        
        // Calcula segundo digito;
        soma = calculaDigitos(2, cpf, multiplicadores2);
        digitoVerificador2 = calculaResto(soma);
        
        if((cpf[9] == digitoVerificador1) && cpf[10] == digitoVerificador2)
            printf("CPF Valido");
        else
            printf("CPF Invalido");

	return 0;
}