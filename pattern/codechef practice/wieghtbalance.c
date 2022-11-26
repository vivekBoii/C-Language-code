#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int s,a,b,c,m;
    scanf("%d %d %d %d %d",&s,&a,&b,&c);
    m=s+(s*c)/100;
    if((m>=a)&&(b>=c))
    printf("yes\n");
    else
    printf("no\n");
    z++;
}
return 0;
}
