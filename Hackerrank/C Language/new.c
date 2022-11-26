#include <stdio.h>

#define max(a, b) (a > b ? 1 : 0)

int main()
{
    int n, arr[1000], maxi, z;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    for (int i = 0; i < n; i++)
        printf("%d", arr[i]);
    for (int i = 0; i < n; i++)

        return 0;
}
