#include <stdio.h>
int main()
{
  int num[100], search, i, n, result=0;

  printf("How many numbers would you like to enter? ");
  scanf("%d", &n);

  printf("Enter %d numbers: ", n);

  for (i = 0; i < n; i++)
    scanf("%d", &num[i]);

  printf("Which number would you like to search for? ");
  scanf("%d", &search);

  for (i = 0; i < n; i++)
    if (num[i] == search)    
    {
      result++;
      break;
    }
  
  if (result==1)
  	printf("%d is present at location %d.", search, i+1);
  else 
    printf("%d was not found.", search);

  return 0;
}