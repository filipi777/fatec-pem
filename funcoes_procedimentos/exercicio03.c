
/*
 * Crie programas C para: 
 * 3) Ler 2 matrizes 2x3 e 3x4 e calcular a multiplicação delas. 
 */

#include <stdio.h>

void lerMatriz(int L, int C, int matriz[L][C])
{
    for(l=0; l<L; l++)
    {
        for(c=0; c<C; c++)
        {
            printf("\nEntre com o elemento da linha %d e coluna %d: ", l, c);
            scanf("%d", &matriz[l][c]);
        }
    }
}

void mostrarMatriz(int L, int C, int matriz[L][C])
{
    printf("\n\n\nPrimeira Matriz\n\n\n");
    for(l=0; l<L; l++)
    {
        for(c=0; c<C; c++)
        {
            printf("%5d ",matriz[l][c]);
        }
        printf("\n");
    }
}

/*
 Função que multiplica duas matrizes
 * Entradas: X - numero de linhas da matriz A,
 *           Y - numero de colunas da Matriz A e numero de linhas da matriz B,
 *           Z - numero de colunas da matriz B
 *           A - primeira matriz de dimensão X e Y
 *           B - segunda matriz de dimensao Y e Z
 *           RES - matriz resultado de dimensão X e Z
 */
void multiplicacaoMatriz(int X, int Y, int Z, int A[X][Y], int B[Y][Z], int RES[X][Z])
{
    int l, c, i, resultadoAux = 0;
    for(l=0; l<X; l++)
    {
        for(c=0; c<Z; c++)
        {
            for(i=0; i<Y; i++)
            {
                resultadoAux += matriz[l][i] * matriz1[i][c];
            }
            resultado[l][c] = resultadoAux;
            resultadoAux = 0;
        }
    }
}

embucetamentoEncaralhado

int main()
{
    
    int matriz1[2][3], matriz2[3][4], resultado[2][4];
    
    lerMatriz(2, 3, matriz1);
    lerMatriz(3, 4, matriz2);

    printf("\n\n\nPrimeira Matriz\n\n\n");
    mostrarMatriz(2, 3, matriz1);
    
    printf("\n\n\n\nSegunda Matriz\n\n\n\n");
    mostrarMatriz(3, 4, matriz2);    
    
    multiplicacaoMatriz(2, 3, 4, matriz1, matriz2, resultado);
        
    printf("\n\n\n\nResultado da multiplicacao\n\n\n\n");
    for(l=0; l< 2; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("%5d ",resultado[l][c]);
        }
        printf("\n");
    }
    return 0;
}