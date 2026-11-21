#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    int z = 0, nz = 0;
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 0) {
                z++;
            } else {
                nz++;
            }
        }
    }

    printf("Number of zero elements: %d\n", z);
    printf("Number of non-zero elements: %d\n", nz);

    return 0;
}