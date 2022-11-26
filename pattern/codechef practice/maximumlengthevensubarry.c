#include<stdio.h>
int even(int,int);

int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a,sum;
    scanf("%d",&a);
    sum=(a*(a+1))/2;
    even(sum,a);
    z++;
}
return 0;
}
int even(int sum,int a)
{if(sum%2==0)
    printf("%d\n",a);
    else{
    for(int i=a;i>=0;i--)
    sum=sum-i;
    even(sum,a-1);
    }
}
