#include <stdio.h>
int main()
{
    int n, z = 0;
    scanf("%d", &n);
    int cont,j=0;
    while (z < n)
    {   
        j=cont;
        for(j;j<n;j++)
        printf(" ");
        for (int i = 0; i < n; i++)
            printf("* ");
        printf("\n");
        z++;
        cont++;
    }
    return 0;
}