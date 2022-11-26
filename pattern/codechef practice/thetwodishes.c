#include<stdio.h>
#include<stdlib.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a,b;
    int j;
    scanf("%d %d",&a,&b);
    if(a>=b)
    printf("%d\n",b);
    else{
    j=b-a;
    printf("%d\n",abs(a-j));
    }
    z++;
}
return 0;
}
