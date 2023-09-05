#include <stdio.h>
int main()
{
    int a,b,c;
    char a1,b1,c1;
    scanf("%d",&a);//eg:- a = 1\n ---> a = 1
    scanf("%d",&b);//eg:- b = /n2/n ---> b = 2
    scanf("%d",&c);//eg:- c = /n3/n ---> c = 3
    scanf("%c",&a1);//eg:- a1 = /na/n --> a1 = /n
    scanf("%c",&b1);//eg:- a2 = a
    scanf("%c",&c1);//eg:- a3 = /n
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("a1 = %u\nb1 = %u\nc1 = %u\n",a1,b1,c1);
    return 0;
}
