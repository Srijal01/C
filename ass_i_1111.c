#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("String in uppercase: ");
    for(i = 0; str[i] != '\0'; i++) 
	{
        putchar(toupper(str[i]));
    }
    printf("\nString in lowercase: ");
    for(i = 0; str[i] != '\0'; i++) 
	{
        putchar(tolower(str[i]));
    }
    return 0;
}

