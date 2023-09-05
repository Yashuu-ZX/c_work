#include <stdio.h>
int main()
{
    int a,b,c;
    char a1,b1,c1;
    scanf("%d",&a);//eg:- a = 1\n ---> a = 1
    scanf("%d",&b);//eg:- b = /n2/n ---> b = 2
    // /n before 2 is terminated coz it is not integer 
    // also sometimes last /n also gets terminated when no variable there
    scanf("%d",&c);//eg:- c = /n3/n ---> c = 3
    scanf("%c",&a1);//eg:- a1 = /na/n --> a1 = /0 ---> (/0 is null character)
    scanf("%c",&b1);//eg:- a2 = a
    scanf("%c",&c1);//eg:- a3 = /0
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("a1 = %u\nb1 = %u\nc1 = %u\n",a1,b1,c1);// %u for ascii code
    return 0;
}
