#include <stdio.h>  
void swap(int , int ); 
void Swap(int *, int *);
int main()
{  
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\nValues before swapping \nnumber 1 = %d, number 2 = %d\n",num1,num2); 
    swap(num1,num2);  
    Swap(&num1,&num2);
} 
void swap(int num1, int num2)  
{  
    int swap;   
    swap = num1;  
    num1 = num2;  
    num2 = swap;  
    printf("\nValues after swapping using call by value\nnumber 1 = %d, number 2 = %d\n",num1,num2);     
}  
void Swap(int *num1, int *num2)
{
    int swap;   
    swap = *num1;  
    *num1 = *num2;  
    *num2 = swap;  
    printf("\nValues after swapping using call by reference \nnumber 1 = %d, number 2 = %d\n",*num1,*num2); 
}