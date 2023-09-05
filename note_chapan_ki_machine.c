#include <stdio.h>
int main()
{
    int rs;
    printf("enter rupees ---> ");
    scanf("%d",&rs);
    int note_500 = rs / 500;
    rs = rs % 500;
    int note_100 = rs / 100;
    rs = rs % 100;
    int note_50 = rs / 50;
    rs = rs % 50;
    int note_10 = rs / 10;
    rs = rs % 10;
    int note_5 = rs / 5;
    rs = rs % 5;
    int note_2 = rs / 2;
    rs = rs % 2;
    int note_1 = rs / 1;
    rs = rs % 1;
    printf("number of notes --->\n");
    printf("number of 500 notes = %d\n",note_500);
    printf("number of 100 notes = %d\n",note_100);
    printf("number of 50 notes = %d\n",note_50);
    printf("number of 10 notes = %d\n",note_10);
    printf("number of 5 notes = %d\n",note_5);
    printf("number of 2 notes = %d\n",note_2);
    printf("number of 1 notes = %d\n",note_1);
    printf("total number of notes ---> %d\n",note_100 + note_50 + note_10 + note_5 + note_2 + note_1);
    return 0;
}