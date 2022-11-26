#include <stdio.h>
int main()
{
    int a, b, n = 0;
    printf("enter the gap");
    scanf("%d %d", &a, &b);
    int i;
    for (i = a; i <= b; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i % j == 0)
                n++;
            if (n >= 3){
                printf("%d\n", i);
            printf("it is a prime no.");}
        }
    }
}