
#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);
    if(b>=n){
      if(n<=a+c)
       printf("YES\n");
       else
       printf("NO\n");
    }
    else
    printf("NO\n");
    z++;
}
return 0;
}
