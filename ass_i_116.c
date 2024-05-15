#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    strcat(str1, str2);
    printf("String after concatenation using strcat(): %s\n", str1);
    int i=0, j=0;
    while(str1[i]!='\0')
        i++;
    while(str2[j]!='\0')
        str1[i++]=str2[j++];
    str1[i]='\0';
    printf("String after concatenation without using strcat(): %s\n", str1);
    return 0;
}

