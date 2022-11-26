
#include <stdio.h>
int y=0;
 
int length(int x){
while(x>0){
x=x/10;
y++;
}
int arr[y];
return y;
}

int lastdigit(int x)  {
    int arr[y];
    for(int i=y-1;i>=0;i--){
    arr[i]=x%10;
    x=x/10;
    }
    return arr[y];
}

int main()
{
    int t;
    scanf("%d", &t);
    length(t);
    int arrr[y]=lastdigit(t);
    for(int i=0;i<y;i++)
    printf("%d",arrr[i]);
    return 0;
}

