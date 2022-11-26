#include <stdio.h>
int main()
{
    float x, a, b, c, d, e;
    printf("enter english marks");
    scanf("%f", &a);
    // scanf -> &

    printf("enter maths marks");
    scanf("%f", &b);
    printf("enter chemistry marks");
    scanf("%f", &c);
    printf("enter physics marks");
    scanf("%f", &d);
    printf("enter optional marks");
    scanf("%f", &e);
    x = (a + b + c + d + e) / 5;
    printf("your percentage %f", x);
    x>33.333 ? printf("you are pass") : printf("you are fail") ;
    return 0;
}