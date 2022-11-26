#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char n[1000];
    int b[10];
    for(int i=0;i<10;i++){
    b[i]=0;
    }
    gets(n);
    int m = strlen(n);
    for(int i=0;i<m;i++){
    if(n[i]==48)
      b[0]=b[0]+1; 
    if(n[i]==49)
      b[1]=b[1]+1; 
    if(n[i]==50)
      b[2]=b[2]+1; 
    if(n[i]==51)
      b[3]=b[3]+1; 
    if(n[i]==52)
      b[4]=b[4]+1; 
    if(n[i]==53)
      b[5]=b[5]+1; 
    if(n[i]==54)
      b[6]=b[6]+1; 
    if(n[i]==55)
      b[7]=b[7]+1; 
    if(n[i]==56)
      b[8]=b[8]+1;
    if(n[i]==58)
      b[9]=b[9]+1; 
    }
    for(int i=0;i<10;i++)
    printf("%d ",b[i]);
    return 0;
}
