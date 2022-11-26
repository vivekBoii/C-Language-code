#include <stdio.h>
int y;
int m[7];

struct point
{
    int f;
    int g;
};

int last_digit(int sum)
{
    for (int i = 0; i < 7; i++)
    {
        if (sum < 1)
        {
            y = i;
            break;
        }
        else
        {
            m[i] = sum % 10;
            sum = sum / 10;
        }
    }
}

int main()
{
    int t, z = 0;
    scanf("%d", &t);
    while (z < t)
    {
        int a, b, x;
        scanf("%d %d", &a, &b);
        x = a + b;
        last_digit(x);
        struct point p1 = {0, 6};
        struct point p2 = {1, 2};
        struct point p3 = {2, 5};
        struct point p4 = {3, 5};
        struct point p5 = {4, 4};
        struct point p6 = {5, 5};
        struct point p7 = {6, 6};
        struct point p8 = {7, 3};
        struct point p9 = {8, 7};
        struct point p0 = {9, 6};
        int sumu = 0;
        for (int i = 0; i < y; i++)
        {
            if (m[i] == p1.f)
                sumu = sumu + p1.g;
            if (m[i] == p2.f)
                sumu = sumu + p2.g;
            if (m[i] == p3.f)
                sumu = sumu + p3.g;
            if (m[i] == p4.f)
                sumu = sumu + p4.g;
            if (m[i] == p5.f)
                sumu = sumu + p5.g;
            if (m[i] == p6.f)
                sumu = sumu + p6.g;
            if (m[i] == p7.f)
                sumu = sumu + p7.g;
            if (m[i] == p8.f)
                sumu = sumu + p8.g;
            if (m[i] == p9.f)
                sumu = sumu + p9.g;
            if (m[i] == p0.f)
                sumu = sumu + p0.g;
        }
        printf("%d\n", sumu);
        z++;
    }
    return 0;
}