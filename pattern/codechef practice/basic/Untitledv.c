#include <stdio.h>
int countDistinct(int *, int);

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        int m = countDistinct(arr, n);
        printf("%d\n", m);
        if (m == 2)
            print("YES");
        if (n == m)
            printf("NO");
        else
            print("NO");
    }
    return 0;
}

int countDistinct(int arr[], int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            count++;
    }
    return count;
}

