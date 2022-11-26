#include <stdio.h>

int main(void) {
	int t,w=0;
    scanf("%d",&t);
    while(w<t){
    int n,q;
    scanf("%d",&n);
    scanf("%d",&q);
    int arr[n];
    int z=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    while(z<q){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    for(int i=0;i<(b-a+2)/2;i++){
    arr[a-1+i*2]=arr[a-1+i*2]+1;
    arr[a+i*2]=arr[a+i*2]-1;
    }
    z++;
    }
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    printf("%d\n",sum);
    w++;
    }

	return 0;
}

