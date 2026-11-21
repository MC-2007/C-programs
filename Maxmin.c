#include <stdio.h>
int main ()
{

    int n,i,j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0];
    for(j=0;j<n;j++)
    {
        if(a[j]>max)
        {
            max = a[j];
        }
        if(a[j]<min)
        {
            min = a[j];
        }
    }
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    return 0;
}