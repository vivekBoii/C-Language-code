#include <stdio.h>

int main(void) {
	int t,z=0; 
    scanf("%d",&t);
    while(z<t){
    int x; 
    scanf("%d",&x);
    if(x>=30)
    printf("yes");
    else 
    printf("no");
    z++;
    }
	return 0;
}

