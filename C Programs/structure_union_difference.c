#include <stdio.h>
#include <string.h>
struct Structure
{
	char name[50];
	int roll;
	float marks;
} s;
union Union
{
	char name[50];
	int roll;
	float marks;
} u;

int main()
{
	strcpy(s.name,"Vishal");
	s.roll = 49;
	s.marks= 89;

	strcpy(u.name,"Vishal");
	u.roll = 49;
	u.marks= 89;

	printf("Size of the structure= %d\n",sizeof(s));
	printf("Size of the union= %d\n",sizeof(u));

	printf("\nData in the structure \n");
	printf(" %s \t %d \t %f \n", s.name,s.roll, s.marks);

	printf("\nData in the union \n");
	printf(" %s \t %d \t %f \n", u.name,u.roll, u.marks);
}