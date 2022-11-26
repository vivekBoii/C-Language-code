#include <stdio.h>
int main()
{
    int n, m, flag = 0;
    scanf("%d", &n);
    m = 2 * n - 1;
    int arr[m][m];

    int org_m = m;

    int i=0,j=0,cnt =0;
    while (5 > 0)
    {   
        i = cnt,j = cnt;
        if (flag > 0)
        {
            m--;
            n--;
        }
        printf("%d %d %d %d\n", m, n, i, j);
        if (n == 0)
        {
            break;
        }
        for (; i < m; i++)
        {
            for (; j < m; j++)
            {
                arr[i][j] = n;
            }
        }
        flag++;
        cnt++;
    }

    for (int i = 0; i < org_m; i++)
    {
        for (int j = 0; j < org_m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}