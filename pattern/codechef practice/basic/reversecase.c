#include<stdio.h>
#include<ctype.h>

int main(){
  char n;
  scanf("%c",&n);
  if(islower(n))
    printf("%c",toupper(n));
  else 
  printf("%c",n);
  return 0;


}