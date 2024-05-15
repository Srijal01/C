#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i, words = 1, spaces = 0;
    printf("Enter a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] == ' ') 
		{
            spaces++;
            words++;
        }
    }
    printf("Number of words: %d\n", words);
    printf("Number of spaces: %d\n", spaces);
    return 0;
}

