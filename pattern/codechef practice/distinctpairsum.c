#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a,b,m;
    scanf("%d %d",&a,&b);
    m=b-a+1;
    printf("%d\n",2*m-1);
    z++;
}
return 0;
}
