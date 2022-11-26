#include <stdio.h>

int main()
{
    printf("enter array dimension");
    int n1, m1;
    scanf("%d %d", &n1, &m1);
    printf("enter the values of array 1");
    int arr1[n1][m1];
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
            scanf("%d", &arr1[i][j]);
    }
    printf("enter array dimension");
    int n2, m2;
    scanf("%d %d", &n2, &m2);
    printf("enter the values of array 2");
    int arr2[n2][m2];
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
            scanf("%d", &arr2[i][j]);
    }
    if (m1 == n2)
    {
        int sum[n1][m2];
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
                sum[i][j] = 0;
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++){
                for (int k = 0; k < m1; k++){
                    sum[j][i] = sum[j][i] + (arr1[j][k] * arr2[k][i]);
                }
            }
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < m2; j++)
                printf("%d ", sum[i][j]);
            printf("\n");
        }
    }
    else
        printf("multiclipation is not possinle");
    return 0;
}
