#include <stdio.h>

int main()
{
    printf("enter array dimension");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("enter the values of array 1");
    int arr1[n][m], arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &arr1[i][j]);
    }
    printf("enter the values of array 2");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &arr2[i][j]);
    }
    int sum[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", sum[i][j]);
            printf("\n");
    }
    return 0;
}
