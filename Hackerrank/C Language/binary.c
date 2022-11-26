#include <stdio.h>
int main()
{
    int x, arr[11], rem;
    scanf("%d", &x);

    int ii = 0;
    rem = x;
    for (int i = 0; i < 11; i++)
    {
        if (rem <= 0)
        {
            ii = i;
            break;
        }
        arr[i] = rem % 2;
        rem = rem / 2;
    }
    for (int i = ii; i < 11; i++)
        arr[i] = 0;
    for (int i = 10; i >= 0; i--)
        printf("%d", arr[i]);
    return 0;
}
