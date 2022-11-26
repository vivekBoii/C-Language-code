#include <stdio.h>
int main(){
int n,z=0;
scanf("%d",&n);
while(z<n){
for(int i=0;i<n;i++)
printf("* ");
printf("\n");
z++;
}
getch();
}