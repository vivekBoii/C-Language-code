#include <stdio.h>
#include <stdlib.h>
int sum(int);

int main(void)
{
    int t, z = 0;
    scanf("%d", &t);

    while (z < t)
    {
        int n;
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            int m,s;
                scanf("%d", &m);
            s=sum(m);
            printf("%d\n", abs(s - (n / 2)));
        }
        else
        {
            int m,s;
                scanf("%d", &m);
            s=sum(m);
            printf("%d\n", abs(s - (n / 2 +1)));
        }
        z++;
    }
    return 0;
}

int sum(int a){
    int sum=0;
    while(a>0){
 int y;
 y=a%10;
 sum=sum+y;
 a=a/10;
    }
    return sum;
}


