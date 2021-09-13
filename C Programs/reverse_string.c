#include <stdio.h>
#include <string.h>
int main() 
{
    int len;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    len = (strlen(str))-1;
    printf("Reversed string: ");
    while (len >= 0) 
    {
        printf("%c",str[len]);
        len--;
    }
    
    return 0;
}