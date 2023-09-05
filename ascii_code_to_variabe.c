#include <stdio.h>
int main()
{
    int ascii;    // variable declaration  
    printf("Enter ascii code ---> ");  
    scanf("%d",&ascii);  // user input  
    // ascii = (char)ascii;
    // printf("%c",ascii);
    printf("The ascii value of the ch variable is : %c",ascii);// function (char)ascii use to change   
    return 0;
}