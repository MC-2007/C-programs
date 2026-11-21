#include <stdio.h>

int main() 
{
    int l,b;
    float a,p;
    printf("Enter length and breadth.\n");
    scanf("%d",&l);
    scanf("%d",&b);
    a=l*b;
    p=2*(l+b);
    printf("The area = %f\n", a);
    printf("The perimeter = %f\n", p);
    return 0;
}