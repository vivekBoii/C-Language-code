#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    // for (int j = 0; j < 3; j++)
    // {
    // printf("%d ", arr[i][j]);
    // }
    // }
    for (int i = 0; i < n; i++)
    {

        if (arr[i][2] < 41)
        {
            printf("%d\n",arr[i][0] * arr[i][1] * arr[i][2]);
        }
        
    }
    return 0;
}