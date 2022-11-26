#include<stdio.h>
int main(){
int t,z=0; 
scanf("%d",&t);
while(z<t){
    int a;
    scanf("%d",&a);
    if(a<100){
      if(a>=0)
    printf("Easy\n");
    }
    if(a<200){
      if(a>=100)
      printf("Medium\n");
    }
    if(a<300){
      if(a>=200)
      printf("Hard\n");
    }

    z++;
}
return 0;
}
