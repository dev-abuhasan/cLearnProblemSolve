#include <stdio.h>

int main (){
    int i, j, m, n;
    int matrix[10][20];

    scanf("%d %d", &m,&n);

    /* Input data in matrix */
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    /* Display the matrix */
    for (i=0; i < m; i++)
    {
        for (j=0; j < n; j++)
        {
            if(i+1 == matrix[i][j] && j+1 == matrix[i][j]){
                printf("%d ", matrix[i][j] + 3);
            } else if(i+1==matrix[i][j]){
                printf("%d ", matrix[i][j] + 2);
            } else if(j+1==matrix[i][j]){
               printf("%d ", matrix[i][j] + 1);
            } else{
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}


