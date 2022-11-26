#include<stdio.h>
int max(int,int);

int main(){
int t; 
scanf("%d",&t);
while(t--){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int arra[1000];
    for(int i=0;i<1000;i++)
      arra[i]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<1000;j++)
        if(arr[i]==j+1)
        arra[j]++;
    
    }
    int maxi = arra[0];
    for(int i=0;i<1000;i++){
        maxi = max(maxi, arra[i]);
    }
    printf("%d\n",n-maxi);

}
return 0;
}

int max(int x,int y){
if(x>y)
return x;
else
return y;
}
