#include <stdio.h>
int main()
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
        int m = n;
        int cont=1;
        for (int i =0; i < n; i++)
        {     
               int j=cont;
            for (j ; j < n; j++){
                if (arr[i] == arr[j]){
                    m = m - 1;
                }
            }
            cont++;
        }
        printf("%d\n", m);
    }
    return 0;
}
