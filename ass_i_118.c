#include <stdio.h>
#include <string.h>
int main()
{
	int i;
    char str[100], revstr[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(revstr, str);
    strrev(revstr);
    printf("Reverse of the string using strrev(): %s\n", revstr);
    int end=0;
    while(str[end]!='\0')
        end++;
    end--;
    for(i=0; i<=end; i++)
        revstr[i]=str[end-i];
    printf("Reverse of the string without using strrev(): %s\n", revstr);
    return 0;
}

