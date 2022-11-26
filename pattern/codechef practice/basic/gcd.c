#include<stdio.h>
#include<ctype.h>

int main(){
  int a,b,d,c;
  scanf("%d %d",&a,&b);
  c=(a>b?a:b);
  for(int i=1;i<=c;i++){
  if(a%i==0&&b%i==0)
  d=i;
  }
  printf("%d",d);
  return 0;


}
