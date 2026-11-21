#include <stdio.h>
int main() 
{
    int n, i, j, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n-i; j++)
        {
            if(a[j] > a[j+1]) 
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d", a[i]);
    }
    return 0;
}