#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int x,e[5];
    scanf("%d",&x);
    e[0] = x%10;
    e[1]=((x%100)-e[0])/10;
    e[2]=((x%1000)-((e[1]*10)+e[0]))/100;
    e[3]=((x%10000)-((e[2]*100)+(e[1]*10)+e[0]))/1000;
    e[4]=((x%100000)-((e[3]*1000)+(e[2]*100)+(e[1]*10)+e[0]))/10000;
    printf("%d",e[0]+e[1]+e[2]+e[3]+e[4]);
    return 0;
}


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int x,e[5];
    scanf("%d",&x);



    int sumi = 0;
    for(int i=0;i<5;i++){
        sumi = sumi + (x%10);
        x /= 10;
    }
    
    printf("%d\n",sumi);
    
    
    
    // e[0] = x%10;
    // e[1]=((x%100)-e[0])/10;
    // e[2]=((x%1000)-((e[1]*10)+e[0]))/100;
    // e[3]=((x%10000)-((e[2]*100)+(e[1]*10)+e[0]))/1000;
    // e[4]=((x%100000)-((e[3]*1000)+(e[2]*100)+(e[1]*10)+e[0]))/10000;
    // printf("%d",e[0]+e[1]+e[2]+e[3]+e[4]);
    return 0;
}