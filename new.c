#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char * p=(char *)malloc(sizeof(int)*101);
        for(int i=0;i<101;i++)
        scanf("%c",&p[i]);
        int k=0;
        for( int i=0;i<1;i++)
        printf("%c",p[i]);
        for( int i=0;i>=0;i--)
        printf("%c",p[i]);
        printf("\n");
    }

}


// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         char p[100];
//         for(int i=0;i<101;i++)
//         scanf("%d",&p[i]);
//         char ptr[200];
//         int k=0;
//         for( int i=0;i<101;i++){
//             ptr[k++]=p[i];
//             ptr[k++]=p[i];
//         }
//         for( int i=0;i<201;i++)
//         printf("%d",ptr[i]);
//     }

// }