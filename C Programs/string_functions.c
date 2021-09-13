#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[100];

	puts("Enter a word");
	scanf("%s",s1);
	printf("You entered: ");
	puts(s1);
	printf("The length of the word: %d",strlen(s1));

	puts("\n\nEnter another word");
	scanf("%s",s1);
	puts("Copying the entered word to another string");
	strcpy(s2,s1);
	puts("Entered word has been copied to another string");
	puts("Printing the copied word");
	printf("The word was: %s",s2);

	puts("\n\nEnter two words");
	scanf("%s %s", s1, s2);
	puts("Concatenating the words");
	strcat(s1,s2);
	puts("Printing the concatenated words");
	printf("Words after concatenating: %s", s1);
}