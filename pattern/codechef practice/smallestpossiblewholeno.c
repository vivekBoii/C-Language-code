#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0)
    printf("%d\n",a);
    else
    printf("%d\n",a%b);
    z++;
}
return 0;
}
