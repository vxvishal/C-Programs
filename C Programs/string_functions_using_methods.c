#include <stdio.h>
#include <string.h>
int length(char s1[]);
void copy(char s1[],char s2[]);
void concat(char s1[],char s2[]);
int main(){
	char str1[100],str2[100];
	printf("Enter a word: ");
	scanf("%s",str1);
	printf("\nThe length of the word is: %d\n",length(str1));
	copy(str2,str1);
	printf("Word after copying\n");
	printf("Word 1: %s \nWord 2: %s\n",str1,str2);
	concat(str1,str2);
	printf("\nEnter two words: ");
	scanf("%s %s",str1,str2);
	printf("\nWords after concatenating: ");
	concat(str1,str2);
	printf("%s",str1);
}
void copy(char s1[],char s2[]){
	int i=0;
	while(s2[i]!='\0'){
		s1[i]=s2[i];
		i++;
	}
	s1[i]='\0'; 
}
void concat(char s1[],char s2[]){
	int len,i;
	len=strlen(s1);
	for(i=0;i<strlen(s2); i++)
		s1[len+i]=s2[i];
	s1[len+i]='\0'; 
}
int length(char s1[]){
	int i;
	for(i = 0; s1[i] != '\0'; i++);
	return i;}