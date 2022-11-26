#include<stdio.h>
#include<ctype.h>

int main(){
  int base,exp;
  scanf("%d %d",&base,&exp);
int m=1;
for(int i=0;i<exp;i++)
m=m*base;
printf("%d",m);
  return 0;


}
