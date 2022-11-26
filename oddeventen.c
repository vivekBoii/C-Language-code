#include <stdio.h>
int main()
{
    int a[10];
    printf("enter 10 numbers :");
    for(int i=0;i<=9;i++) 
        scanf("%d",&a[i]);

    int even[10],odd[10];
    int ii =0,jj = 0;
    for(int i=0;i<=9;i++){
        if(a[i]%2==0){
            even[ii] = a[i];
            ii++;
        }else{
            odd[jj] = a[i];
            jj++;
        }
    }
    printf("Outputing the even number : ");

    for(int i=0;i<ii;i++){
        printf("%d , ",even[i]);
    }

    printf("\nOutputing the odd number : ");
    for(int i=0;i<jj;i++){
        printf("%d , ",odd[i]);
    }

    return 0;

    // for(i=0;i<=9;i++)
    // if(a[i]%2==0)
    // printf("%d %d %d %d %d %d %d %d %d %d are even",a[i],a[i],a[i],a[i],a[i],a[i],a[i],a[i],a[i],a[i]);
    // else
    // printf("%d %d %d %d %d %d %d %d %d %d are odd",a[i],a[i],a[i],a[i],a[i],a[i],a[i],a[i],a[i],a[i]);
}