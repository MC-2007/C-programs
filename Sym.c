#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    int flag = 0;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is NOT symmetric.\n");
    }

    return 0;
}