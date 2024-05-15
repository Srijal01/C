#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100], word[20];
    int i, j, flag = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter word to search: ");
    gets(word);
    for(i = 0; str[i] != '\0'; i++) 
	{
        if(str[i] == word[0]) 
		{
            for(j = 1; word[j] != '\0'; j++) 
			{
                if(str[i+j] != word[j]) 
				{
                    break;
                }
            }
            if(word[j] == '\0') 
			{
                flag = 1;
                break;
            }
        }
    }
    if(flag) 
	{
        printf("'%s' found in '%s'\n", word, str);
    } 
	else 
	{
        printf("'%s' not found in '%s'\n", word, str);
    }
    return 0;
}


