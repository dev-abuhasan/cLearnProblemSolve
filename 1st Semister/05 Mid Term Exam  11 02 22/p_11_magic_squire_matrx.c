#include <stdio.h>

int main() {
    int A[50][50];
    int i, j, M=3, N=3;
    int size;
    int rowsum, columnsum, diagonalsum;
    int magic = 0;

    if(M==N){
        printf("Enter the elements of matrix \n");
        for(i=0; i<M; i++) {
            for(j=0; j<N; j++) {
                scanf("%d", &A[i][j]);
            }
        }
        printf("\n\nMATRIX is\n");
        for(i=0; i<M; i++){
            for(j=0; j<N; j++){
                printf("%3d\t", A[i][j]);
            }
            printf("\n");
        }
    // calculate diagonal sum
        diagonalsum = 0;
        for(i=0; i<M; i++){
            for(j=0; j<N; j++){
                if(i==j) {
                    diagonalsum = diagonalsum + A[i][j];
                }
            }
        }
    // calculate row sum
        for(i=0; i<M; i++){
            rowsum = 0;
        for(j=0; j<N; j++){
            rowsum = rowsum + A[i][j];
        }
            if(rowsum != diagonalsum){
                printf("\nNO");
                return;
            }
        }
    // calculate column sum
        for(i=0; i<M; i++){
            columnsum = 0;
            for(j=0; j<N; j++){
                columnsum = columnsum + A[j][i];
            }
            if(columnsum != diagonalsum){
                printf("\nNO");
                return;
            }
        }
        printf("\nYES");
    } else {
        printf("\n\nPlease enter the square matrix order(m=n) \n\n");
    }
}
