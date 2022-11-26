#include <stdio.h>
void lastdigit(int);
int arr[20];
int length(void);

int main()
{
    int x, l;
    scanf("%d", &x);
    lastdigit(x);
    l = length();

    for (int i = 0; i < 20; i++)
    printf("%d",arr[i]);
    printf("%d",l);
    
    
      
}
int length()
{
    for (int i = 0; i < 20; i++)
        if (arr[i] == 0)
            return i;
}

void lastdigit(int y)
{
    for (int i = 0; i < 20; i++)
    {
        arr[i] = y % 10;
        y = y / 10;
    }
}