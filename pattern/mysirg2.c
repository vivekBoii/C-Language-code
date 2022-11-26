#include <Stdio.h>
int count(int, int, int *);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int f = (n - 1) / 2;
        scanf("%d", &n);
        int arr[n];
        int array[(2 * n + f)];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (int i = 0; i < n; i++)
            array[i] = count(0, i, &arr[0]);
        for (int i = 0; i < n; i++)
            array[n + i] = count(i, 0, &arr[0]);
        int c = 1;
        int d = n - 1;
        for (int i = 0; i < f; i++)
        {
            array[2 * n + i] = count(c, d, &arr[0]);
            c++;
            d++;
        }
        for (int i = 1; i < n; ++i)
        {
            if (array[0] < array[i])
            {
                array[0] = array[i];
            }
        }
        printf("%d", array[0]);
    }
}

int count(int x, int y, int *p)
{
    int m = 0, n = 0;
    for (int i = x; i < y; i++)
    {
        if (*(p + i) == 0)
            m++;
        if (*(p + i) == 1)
            n++;
    }
    if (m > 0 && n > 0)
        return (m * n);
    else if (m > 0 && n == 0)
        return (m * m);
    else if (n > 0 && m == 0)
        return (n * n);
}

void calculate_the_maximum(int n, int l)
{
    int p = (n * (n - 1)) / 2;
    int arr1[p], arr2[p], arr3[p];
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            arr1[k] = i & j;
            k++;
        }
    }
    k = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            arr2[k] = i | j;
            k++;
        }
    }
    k = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            arr3[k] = i ^ j;
            k++;
        }
    }
    int array1[15], array2[15], array3[15];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (arr1[i] == j)
                array1[j] = 1;
        }
    }
    int flag = 1;
    for (int m = l - 1; m >= 0; m--)
    {
        if (array1[m] == 1)
        {
            printf("%d\n", m);
            flag = 0;

            break;
        }
    }
    if (flag)
        printf("0\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (arr2[i] == j)
                array2[j] = 1;
        }
    }
    flag = 1;
    for (int m = l - 1; m >= 0; m--)
    {
        if (array2[m] == 1)
        {
            printf("%d\n", m);
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("0\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            if (arr3[i] == j)
                array3[j] = 1;
        }
    }
    flag = 1;
    for (int m = l - 1; m >= 0; m--)
    {
        if (array3[m] == 1)
        {
            printf("%d", m);
            flag = 0;

            break;
        }
    }
    if (flag)
        printf("0\n");
}
