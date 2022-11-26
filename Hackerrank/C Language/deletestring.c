#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "Programming";
    char d[] = "is fun";
    for(int i=0;i<strlen(s);i++)
    printf("%c",s[i]);
    printf(" ");
    puts(d);
    return 0;
}