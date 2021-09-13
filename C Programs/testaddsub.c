#include <stdio.h>
#include <stdlib.h>
int c = 0,numa[8]={0},numb[8]={0},diff[8]={0},sum[8]={0};
void add(); void sub();
int main()
{
      int input;

      printf("Enter two 8-bit binary numbers\n");
      printf("\nEnter first number: ");
            for(int i = 0; i<8; i++)
                  scanf("%d",&numa[i]);   
      printf("\nEnter second number: ");
            for(int i = 0; i<8; i++)
                  scanf("%d",&numb[i]);
      printf("\nEnter '1' to perform addition and '2' to perform subtraction: ");
      scanf("%d",&input);
      switch(input)
      {
            case 1: add();
                        break;
            case 2: sub();
                        break;
            default: printf("\nInvalid Choice.");
      }
      return 0;
}
void add()
{     
      for(int i = 7; i >= 0; i--)
      {
            sum[i] = numa[i]+ numb[i] + c;
            if(sum[i]>=2)
                  c = 1;
            else
                  c = 0;
            sum[i] = sum[i]%2;
      }
      printf("\nSum is: ");
      for(int i = 0; i<8; i++)
            printf("%d",sum[i]);
}
void sub()
{
      for(int i = 7; i >= 0; i--)
      {
            diff[i] = numa[i] - numb[i];
            if(diff[i] < 0)
                  numa[i-1] = numa[i-1] - 1;
            diff[i] = abs(diff[i]%2);
      }
      printf("\nDifference is: ");
      for(int i = 0; i<8; i++)
            printf("%d",diff[i]);
}