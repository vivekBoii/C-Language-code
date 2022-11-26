#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n,i=0,j=1;
        scanf("%d",&n);
        int arr[n];
        for(int k=0;k<n;k++)
        scanf("%d",&arr[i]);
        for(i=0;i<n;i++){
        for(j=1;j<n;j++){
        if(arr[i]==arr[j]){
        arr[i]=0;
        for (int p = j; p < n; p++)
        arr[p] = arr[p + 1];
        n--; 
        i++;
        j++; 
        }
        }
        }
        for(int k=0;k<n;k++)
        printf("%d",arr[k]);
        if(arr[0]==0||arr[0]==1)  
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}