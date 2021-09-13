#include <stdio.h>
struct student
{
	char name[50];
	int roll;
	float marks;
} stud[100];

int main()
{
	int i,n;
	printf("How many student details would you like to enter? ");
	scanf("%d", &n);
	printf("\nEnter the student details\n\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter name: ");
		scanf("%s",stud[i].name);
		printf("Enter roll number: ");
		scanf("%d",&stud[i].roll);
		printf("Enter marks: ");
		scanf("%f",&stud[i].marks);
		printf("\n");
	}

	printf("You entered\n\n");
	for(i=0; i<n; i++)
	{
		printf("Name: %s",stud[i].name);
		printf("\nRoll number: %d",stud[i].roll);
		printf("\nMarks: %.1f",stud[i].marks);
		printf("\n\n");
	}
}