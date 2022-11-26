#include <stdio.h>
int main()
{
    int t, z = 0;
    scanf("%d", &t);
    char arr[t];
    while (z < t)
    {
        int n, x, y;
        scanf("%d", &n);
        scanf("%d", &x);
        scanf("%d", &y);
        if (y == 0)
            printf("YES\n");
        else if (y % x == 0)
            printf("YES\n");
        else
            printf("NO\n");
        z++;
    }
    
    return 0;
}