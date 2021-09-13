#include <stdio.h>
int main()
{
  int i, first, last, middle, n, search, num[100];
  printf("How many numbers would you like to enter? ");
  scanf("%d",&n);

  printf("Enter %d numbers: ", n);
  for(i = 0; i < n; i++)
    scanf("%d",&num[i]);

  printf("Which number would you like to search for? ");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) 
  {
    
    if(num[middle] < search)
      first = middle + 1;

    else if(num[middle] == search) 
    {
      printf("%d was found at location %d.", search, middle+1);
      break;
    }

    else
      last = middle - 1;

    middle = (first+last)/2;
  }
  if(first > last)
  printf("%d was not found.", search);
  return 0;
}