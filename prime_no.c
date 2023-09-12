#include <stdio.h>
int main()
{
    int a = 100;
    int check;
    for (int i =2; i<= a;i++){
        check= 1;
        for(int h =2 ;h<i;h++){
            if ((i%h)==0){
                check=0;
            }
        }
        if (check==1){
            printf("%d\n",i);
        }
    }
    return 0;
}