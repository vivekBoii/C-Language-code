#include <stdio.h>
#include <string.h>

int main(){
    char arr[100],ch;
    gets(arr);
    int n=0;
    for(int i=0;i<100;i++){
    if('a'==arr[i]||'e'==arr[i]||'i'==arr[i]||'o'==arr[i]||'u'==arr[i]||'A'==arr[i]||'E'==arr[i]||'I'==arr[i]||'O'==arr[i]||'U'==arr[i])
    n++;
    }
    printf("VOWELS FREQUENCY ARE %d",n);
    return 0;
}