#include<stdio.h>
#include<math.h>

int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int u,v,a,s,b;
    scanf("%d %d %d %d",&u,&v,&a,&s);
    if(u==v)
    printf("YES\n");
    else{
    b=sqrt(u*u-2*a*s);
    if(v>=b)
    printf("YES\n");
    else
    printf("NO\n");
    }
    z++;
}
return 0;
}
