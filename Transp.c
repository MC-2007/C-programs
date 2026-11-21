#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    int t[c1][r1];
    
    printf("\nEnter elements for Matrix A (%dx%d):\n", r1, c1);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < c1; i++) {
        for (int j = 0; j < r1; j++) {
            printf("%d", t[i][j]);            
        }
    }
    return 0;
}