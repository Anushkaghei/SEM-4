
#include <stdio.h>
#define MAX_ROWS 10
#define MAX_COLS 10

void diagonal(int matrix[MAX_ROWS][MAX_COLS],int ROW, int COL)
{
    for(int i=0;i<=(ROW+COL);i++)
    {
        for(int j=0;j<COL;j++)
        {
            for(int k=0;k<ROW;k++)
            {
                if(k+j==i)
                    printf("%d ",matrix[k][j]);
            }
        }
    }
}   

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rows,cols;
    scanf("%d",&rows);
    scanf("%d",&cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    diagonal(matrix, rows, cols);
    return 0;
}
