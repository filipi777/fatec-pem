
/*
 * Crie programas C para:
 * 1) Declarar e inicializar uma matriz 4x4 como identidade
 * | 1 0 0 0 |
 * | 0 1 0 0 |
 * | 0 0 1 0 |
 * | 0 0 0 1 |
 * (uns na diagonal e zeros fora dela)
 * 
 * 2) Ler uma matriz 4x4 do teclado e mostrar a matriz transposta deste
 * (o que é linha vira coluna e vice-versa)
 * | 1  2  3  4  |     | 1 5 9  13 |
 * | 5  6  7  8  |     | 2 6 10 14 |
 * | 9  10 11 12 |  -> | 3 7 11 15 |
 * | 13 14 15 16 |     | 4 8 12 16 |
 * 
 * 3) Ler 2 matrizes 2x3 e 3x4 e calcular a multiplicação delas. 
 */

#include <stdio.h>

int main()
{
    int l, c, i, resultadoAux = 0;
    int matriz[2][3], matriz1[3][4], resultado[2][4];
    
    printf("\n\nLendo a primeira matriz \n");
    for(l=0; l<2; l++)
    {
        for(c=0; c<3; c++)
        {
            printf("\nEntre com o elemento da linha %d e coluna %d: ", l, c);
            scanf("%d", &matriz[l][c]);
            
        }
    }
    printf("\n\nLendo a segunda matriz \n");
    for(l=0; l<3; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("\nEntre com o elemento da linha %d e coluna %d: ", l, c);
            scanf("%d", &matriz1[l][c]);
        }
    }

    printf("\n\n\nPrimeira Matriz\n\n\n");
    for(l=0; l< 2; l++)
    {
        for(c=0; c<3; c++)
        {
            printf("%5d ",matriz[l][c]);
        }
        printf("\n");
    }
    
    printf("\n\n\n\nSegunda Matriz\n\n\n\n");
    for(l=0; l< 3; l++)
    {
        for(c=0; c<4; c++)
        {
            printf("%5d ",matriz1[l][c]);
        }
        printf("\n");
    }
    
    for(l=0; l<2; l++)
    {
        for(c=0; c<4; c++)
        {
            for(i=0; i<3; i++)
            {
                resultadoAux += matriz[l][i] * matriz1[i][c];
            }
            resultado[l][c] = resultadoAux;
            resultadoAux = 0;
        }
    }
    
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