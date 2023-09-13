#include <stdio.h>
int main()
{
    int a=20;
    // printf("ENTER NUMBER FROM WHERE YOU WANT PRIME NUMBERS --> ");
    // scanf("%d",&a);
    for (int i = 2; i <= a; i++)
    {
        int temp= 1;
        for(int j = 2 ;j < i;j++)
        {
            if ((i%j)==0)
            {
                temp=0;
            }
        }
        if (temp==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
