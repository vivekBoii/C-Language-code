#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a,b,x;
    scanf("%d %d %d",&a,&b,&x);
    if(b>a)
    printf("Too Early\n");
    else if(a>x)
    printf("Too Late\n");
    else
    printf("Take second dose now\n");
    z++;
    }
return 0;
}
