/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct time
{
    int hours;
    int min;
    int sec;
};

int main()
{
    struct time t1, t2, t3;
    printf("enter hours, minutes and seconds");
    scanf("%d %d %d", &t1.hours, &t1.min, &t1.sec);
    printf("enter hours, minutes and seconds");
    scanf("%d %d %d", &t2.hours, &t2.min, &t2.sec);
    t3.sec = (t1.sec - t2.sec) % 60;
    t3.min = (t1.min - t2.min + (t1.sec - t2.sec) / 60) % 60;
    t3.hours = t1.hours - t2.hours + (t1.min - t2.min + (t1.sec - t2.sec) / 60) / 60;
    printf("difference is %d:%d:%d", t3.hours, t3.min, t3.sec);
    return 0;
}
