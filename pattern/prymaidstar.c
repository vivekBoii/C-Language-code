#include <stdio.h>
int main()
{
    int n, z = 0;
    scanf("%d", &n);
    int j, cont = n;
    int i, cont1 = 0;
    while (z < n)
    {
        j = cont;
        i = cont1;
        for (j; j < n; j++)
        {
            printf(" ");
        }
        for (i; i < n; i++)
        {
            printf("* ");
        }
        printf("\n");
        cont1++;
        cont--;
        z++;
    }

    return 0;
}