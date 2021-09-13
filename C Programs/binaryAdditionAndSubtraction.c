#include <stdio.h>

int addition(int a,int b);
int subtraction(int a, int b);

int main()
{
    int num1,num2, add, sub;

    printf("Input first integer value: ");
    scanf("%d",&num1);

    printf("Input second integer value: ");
    scanf("%d",&num2);

    add=addition(num1,num2);
    sub=subtraction(num1,num2);

    printf("Binary Addition: %d\n",add);
    printf("Binary Subtraction: %d\n",sub);

    return 0;

}

int addition(int a,int b)
{
      int c; 
      while (b != 0) 
      {
          c = (a & b) << 1;
          a=a^b;
          b=c;
      }
      return a;
}


int subtraction(int a, int b)
{
      int carry;
      b = addition(~b, 1);

      while (b != 0) 
      {
          carry = (a & b) << 1;
          a = a ^ b;
          b = carry;
      }
      return a;
}
