#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks = ");
    scanf("%d",&marks);
    if (marks<=100)
    {
        switch (marks/10)
        {
        case 10:
            printf("Topper!!!\nYour grade is --> A");
            break;
        case 9:
            printf("Your grade is --> A");
            break;
        case 8:
            printf("Your grade is --> B");
            break;
        case 7:
            printf("Your grade is --> C");
            break;
        case 6:
            printf("Your grade is --> D");
            break;
        default:
            printf("Your grade is --> F");
            break;
        }
    }
    else
    {
        printf("enter correct marks!!!");
    }
    return 0;
}