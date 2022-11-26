#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; ++i)
        scanf("%d", &arr[i]);
    int sum = 0;
    float avg = 0;
    for (int i = 0; i < t; ++i)
        sum = sum + arr[i];
    avg = sum / t;
    for (int i = 0; i < t; ++i)
        arr[i] = (arr[i] - avg) * (arr[i] - avg);
    sum = 0, avg = 0;
    for (int i = 0; i < t; ++i)
        sum = sum + arr[i];
    avg = sqrt(sum / t);
    printf("%f", avg);
    return 0;
}
