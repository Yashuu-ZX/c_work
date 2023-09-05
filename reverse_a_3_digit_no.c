#include <stdio.h>
int main()
{
    int num;
    printf("enter a 4 digit no ---> ");
    scanf("%d",&num);
    int a = num % 1000;
    int b = num % 100;
    int c = num % 10;
    int revnum = c*1000 + (b-c)*10 + (a-b)/10 + (num-a)/1000;
    printf("reverse of number ---> %d",revnum);
}