#include <stdio.h>
int arr[20];
void lastdigit(int);
int length(int);
int triple(int);

int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    lastdigit(n);
    int l = length(n);
    int sum = 0;
    for (int i = 0; i < l; i++)
        sum = sum + triple(arr[i]);
    if (sum == n)
        printf("this is a armstrong number");
    else
        printf("this is not a armstrong number");
    return 0;
}

int length(int x)
{
    int i;
    for (i = 0; i < 20; i++)
    {
        x = x / 10;
        if (x < 1)
        {
            return i + 1;
            break;
        }
    }
}

void lastdigit(int x)
{
    for (int i = 0; i < 20; i++)
    {
        arr[i] = x % 10;
        x = x / 10;
    }
}

int triple(int x)
{
    int y = x * x * x;
    return y;
}