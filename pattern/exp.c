#include <stdio.h>

int main(void)
{
    int n,z=0,j=0;
    scanf("%d", &n);
    int prr[n];
    while(z<n){
    int arr[3];
    for (int i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
    int max = 0, min = 0;
    if (arr[0] > arr[1])
    {
        max = arr[0], min = arr[1];
        if (arr[0] > arr[2])
        {
            max = arr[0];
        }
        else
        {
            max = arr[2];
        }
        if (arr[2] > arr[1])
        {
            min = arr[1];
        }
        else
        {
            min = arr[2];
        }
    }
    else
    {
        max = arr[1], min = arr[0];
        if (arr[1] > arr[2])
        {
            max = arr[1];
        }
        else
        {
            max = arr[2];
        }
        if (arr[2] > arr[0])
        {
            min = arr[0];
        }
        else
        {
            min = arr[2];
        }
    }
    prr[j]=max-min;
    z++;
    j++;
    }
    for(j=0;j<n;j++)
    printf("%d\n",prr[j]);
    return 0;
}
