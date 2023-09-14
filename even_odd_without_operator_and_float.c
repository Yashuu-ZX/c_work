#include <stdio.h>
int main()
{
    float a,n;
    printf("enter a number --> ");
    scanf("%f",&a);
    n = a/2;
    while (n>1)
    {
        n = n-1;
    }
    if (n == 1)
    {
        printf("%f is even",a);
    }
    else if (n == 0.5)
    {
        printf("%f is odd",a);
    }
    return 0;
}