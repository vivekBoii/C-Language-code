#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int arr[t];
    for (int i = 0; i < t; i++)
        scanf("%d", &arr[i]);
    int largest=arr[0];
     for (int i = 1; i < t; i++){
    if(arr[i]>largest)
    largest=arr[i];
    else
    largest=arr[0];
    }
    printf("%d",largest);
    return 0;
}
