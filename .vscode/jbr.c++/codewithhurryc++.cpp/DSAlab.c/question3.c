//write a program to multiply two matrix ?
#include <stdio.h>

int main() {
    int m, n, p, q;

 
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &m, &n);

   
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];


    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }


    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}