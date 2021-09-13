#include <stdio.h>

int main() 
{

int num;

printf("Enter a number: ");
scanf("%d", &num);

printf ( (num&1)?"The number is odd." : "The number is even.");

return 0;
}