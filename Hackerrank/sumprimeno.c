#include <stdio.h>
int arr[100];
int l = 0;
int primeno(int);

int main()
{
    int n;
    scanf("%d", &n);
    primeno(n);
    for (int j = 0; j < l; j++)
        printf("%d ", arr[j]);
    for (int e = 0; e < l; e++){
        for (int r = 0; r < l; r++){
            if (arr[e] + arr[r] == n)
                printf("(%d,%d)", arr[e], arr[r]);
        }
    }
    return 0;
}

int primeno(int x)
{
    int i, j = 0;
    for (int k = 2; k <= x; k++)
    {
        int n = 0;
        for (i = 1; i <= x; i++)
        {
            if (k % i == 0)
                n++;
        }
        if (n == 2)
        {
            l++;
            arr[j] = k;
            j++;
        }
    }
}