#include<stdio.h>
int min(int,int);
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a,b,c,mini;
    scanf("%d %d %d",&a,&b,&c);
    mini=min(a,min(b,c));
    printf("%d\n",a+b+c-mini);
    z++;
}
return 0;
}
int min(int x ,int y){
if(x>y)
return y;
else
return x;
}