#include <stdio.h>
int poower(int, int);

int main()
{
    int t, s;
    scanf("%d %d", &t, &s);
    printf("%d", poower(t, s));
    return 0;
}

int poower(int x, int y)
{
    int power;
    if (y == 1)
        return x;
    else
    {
        power = x * poower(x, --y);
    }
    return power;
}