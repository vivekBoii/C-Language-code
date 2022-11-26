#include <stdio.h>

int main(void) {
	int t,z=0;
    scanf("%d",&t);
    while(z<t){
    int x,y,a,b;
    scanf("%d",&x);
    scanf("%d",&y);
    a=x/y;
    b=x%y;
    printf("%d\n",a+b);
    z++;
    }
	return 0;
}

