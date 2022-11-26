#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=0;
    for(int i=1;i<=n;i++){
    if(n%i==0)
    m++;
    }
    if(m<3)
    printf("this is a prime no.");
    else
    printf("this is not a prime no.");
    return 0;
}