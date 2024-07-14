#include <stdio.h>  
  
#define ROW 3  
#define COL 3  
  
void transpose(int mat[ROW][COL]) {  
    int i, j, temp;  
  
    for (i = 0; i < ROW; i++) {  
        for (j = i+1; j < COL; j++) {  
            temp = mat[i][j];  
            mat[i][j] = mat[j][i];  
            mat[j][i] = temp;  
        }  
    }  
}  
  
void printMatrix(int mat[ROW][COL]) {  
    int i, j;  
    for(i = 0; i < ROW; i++) {  
        for(j = 0; j < COL; j++) {  
            printf("%d ", mat[i][j]);  
        }  
        printf("\n");  
    }  
}  

/*
方针转置，输入一个方程将其转置，尽量不用其他空间
*/
  
int main() {  
    int mat[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  
    printf("Original Matrix:\n");  
    printMatrix(mat);  
  
    transpose(mat);  
  
    printf("\nTransposed Matrix:\n");  
    printMatrix(mat);  
  
    return 0;  
}
