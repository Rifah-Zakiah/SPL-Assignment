#include<stdio.h>
int main(){
    int r, c;
    printf("Enter number of rows:\n");
    scanf("%d", &r);
    printf("Enter number of columns:\n");
    scanf("%d", &c);
    int mat[r][c], trans[c][r];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    printf("Input matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the input matrix is:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            trans[j][i] = mat[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}