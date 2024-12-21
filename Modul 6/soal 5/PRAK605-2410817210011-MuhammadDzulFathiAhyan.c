#include <stdio.h> 
int main()
{
    int ordo; 
    scanf("%d", &ordo); 
    int matrixA[ordo][ordo], matrixB[ordo][ordo],matrixC[ordo][ordo]; 
    printf("Matriks A \n"); 
    for(int i = 0; i < ordo; i++)
    {
        for( int j = 0; j < ordo; j++){scanf("%d", &matrixA[i][j]); } 
    } 
    printf("Matriks B \n"); 
    for(int i = 0; i < ordo; i++)
    { 
        for( int j = 0; j < ordo; j++){scanf("%d", &matrixB[i][j]); } 
    } 
    printf("Matriks %dX%d \n", ordo, ordo); 
    for(int i = 0; i < ordo; i++)
    { 
        for(int j = 0; j < ordo; j++)
        { 
            matrixC[i][j] = 0; 
            for (int k = 0; k < ordo; k++){matrixC[i][j] += matrixA[i][k] * matrixB[k][j]; } 
        } 
    } 
    for(int i = 0; i < ordo; i++)
    { 
        for(int j = 0; j < ordo; j++){ printf("%d ", matrixC[i][j]);} 
        printf("\n"); 
    } 
 
    return 0; 
}  