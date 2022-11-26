#include <stdio.h>
int main()
{
    int n, i, z;
    scanf("%d", &n);
    z = n;
    int cont=n-1;
    while (z > 0)
    {
        i=cont;
        for (i; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
            cont--,z--;
    }
    getch();
}