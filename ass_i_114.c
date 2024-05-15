#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, length=0;
    printf("Enter a string: ");
    gets(str);
    length=strlen(str);
    printf("Length of string using strlen(): %d\n", length);
    for(i=0; str[i]!='\0'; i++)
        length++;
    printf("Length of string without using strlen(): %d\n", length);
    return 0;
}

    
