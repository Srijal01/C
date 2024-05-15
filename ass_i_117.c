#include <stdio.h>
#include <string.h>
int main()
{
	int i;
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if(strcmp(str1, str2)==0)
        printf("Strings are equal using strcmp().\n");
    else
        printf("Strings are not equal using strcmp().\n");
    int flag=0;
    for(i=0; str1[i]!='\0' || str2[i]!='\0'; i++)
        if(str1[i]!=str2[i])
        {
            flag=1;
            break;
        }
    if(flag==0)
        printf("Strings are equal without using strcmp().\n");
    else
        printf("Strings are not equal without using strcmp().\n");
    return 0;
}

