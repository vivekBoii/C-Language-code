#include <stdio.h>

int max_of_four();

#include <stdio.h>
int main()
{
  max_of_four();
  return 0;
}

int max_of_four()
{
  int arr[4];
  for (int i = 0; i < 4; i++)
  {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  for (int i = 1; i < 4; i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }
  printf("%d", max);
}
