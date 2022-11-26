#include <stdio.h>
#include<stdlib.h>

int main()
{
    while (1)
    {
        int a, b;
        char ch;
        printf("select operation(+,-,/,*)\n");
        printf("press ~ for exit");
        scanf("%c", &ch);
        printf("enter two numbers\n");
        scanf("%d %d", &a, &b);
        switch (ch)
        {
        case '+':
            printf("sum is %d", a + b);
            break;
        case '-':
            printf("difference is %d", a - b);
            break;
        case '*':
            printf("multiplication is %d", a * b);
            break;
        case '/':
            printf("division is %d", a / b);
            break;
        case '~':
            exit(0);
        default:
            printf("no such operation");
        }
    }
    return 0;
}