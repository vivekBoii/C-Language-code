#include <stdio.h>
int main(){
   int n , a ,b ,c,arr[20],sum;
   scanf("%d %d %d %d",&n,&a,&b,&c);
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
   for(int m=3;m<=n;m++)
   arr[m]=arr[m-1]+arr[m-2]+arr[m-3];
   printf("%d",arr[n-1]);
   return 0;
}