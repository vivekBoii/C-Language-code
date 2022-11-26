#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a;
    scanf("%d",&a);
    printf("%d\n",a/2+1);
    z++;
}
return 0;
}
