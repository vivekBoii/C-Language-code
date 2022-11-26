#include<Stdio.h>
int count(int,int,int *);

int main(){
int t;
scanf("%d",&t);
while(t--){
int n;
int f=(n-1)/2;
scanf("%d",&n);
int arr[n];
int array[(2*n+f)];
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
for(int i=0;i<n;i++)
array[i]=count(0,i,&arr)
for(int i=0;i<n;i++)
array[n+i]=count(i,0,&arr)
int c=1;
int d=n-1;
while(f--){
array[2*n+i]=count(c,d,&arr)
c++;
d++;
}
for (int i = 1; i < n; ++i) {
if (array[0] < arayr[i]) {
array[0] = array[i];
}
}
printf("%d", array[0]);
}

}

int count(int x,int y,int *p){
int m=0,n=0;
for(int i=x;i<y;i++){
if(*(p+i)==0)
m++;
if(*(p+i)==1)
n++;
}
if(m>0&&n>0)
return (m*n);
else if(m>0&&n==0)
return (m*m);
else if(n>0&&m==0)
return (n*n);
}

