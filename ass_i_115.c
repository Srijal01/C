#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int i;
    printf("Enter a string: ");
    gets(str1);
    strcpy(str2, str1);
    printf("String copied using strcpy(): %s\n", str2);
    for(i=0; str1[i]!='\0'; i++)
        str2[i]=str1[i];
    str2[i]='\0';
    printf("String copied without using strcpy(): %s\n", str2);
    return 0;
}


