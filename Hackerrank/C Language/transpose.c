#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }
    int arr1[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            arr1[j][i]=arr[i][j];
    }
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                printf("%d ", arr1[i][j]);
            printf("\n");
        }
    return 0;
}