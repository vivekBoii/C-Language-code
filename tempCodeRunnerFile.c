#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int print(int);
int odd_even(int);

int main()
{
    int a, b,i;
    scanf("%d\n%d", &a, &b);
    for(i=0;i<=8;i++)
    while (a + i <= 9)
    {print(a + i);
      i++;
    }
    for(i=1;i<=100;i++)
    while(9+i<=b)
    {odd_even(9+i);
    i++;}
    return 0;
}

int print(int x)
{
    if (x == 1)
        printf("one\n");
    else if (x == 2)
        printf("two\n");
    else if (x == 3)
        printf("three\n");
    else if (x == 4)
        printf("four\n");
    else if (x == 5)
        printf("five\n");
    else if (x == 6)
        printf("six\n");
    else if (x == 7)
        printf("seven\n");
    else if (x == 8)
        printf("eight\n");
    else if (x >= 9)
        printf("nine\n");

    return 0;
}

int odd_even(int y)
{
    if (y % 2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    return 0;
}