#include<stdio.h>
int main(){
int n,z=0,f=0;
scanf("%d",&n);
int i,cont1=0;
int j,cont2=n;
while(z<n){
i=cont1;
j=cont2;
for(j;j<n;j++)
printf(" ");
for(i;i<n;i++)
printf("*");
printf("\n");
cont1++;
cont2--;
z++;
}
int k,cont3=n-1;
int l,cont4=1;
while(f<n){
k=cont3;
l=cont4;
for(l;l<n;l++)
printf(" ");
for(k;k<n;k++)
printf("*");
printf("\n");
cont4++;
cont3--;
f++;
}
// getch();







}