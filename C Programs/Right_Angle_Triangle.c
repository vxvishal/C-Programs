#include<stdio.h>  

int main()   
{ 
    float b, p, area;  

    printf("Enter the values of base and perpendicular: ");
    scanf("%f %f", &b, &p);

    area = ( b * p)/2 ;  

    printf("Area of Right Angle Triangle is : %f", area);  

    return (0);  
}  