#include <stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
 int n;
 scanf("%d",&n);
 int arr[n];
 for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);
 int sum=0;
 for(int i=0;i<n;i++)
sum=sum+arr[i];
if(sum%2==0)
printf("Bob\n");
else
printf("Alice\n");
}
return 0;
}