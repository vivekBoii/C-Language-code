#include <stdio.h>
int main()
{
    int t, z = 0;
    scanf("%d", &t);
    while (z < t)
    {
        int a, b, c, d, e, f;
        scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        if (a + b == c + d)
        {
            if (a * b == c * d)
                printf("1\n");
        }
        else if (a + b == e + f)
        {
            if (a * b == e * f)
                printf("2\n");
        }
        else
            printf("0\n");
        z++;
    }
    return 0;
}
