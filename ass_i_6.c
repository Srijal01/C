#include<stdio.h>
#include<conio.h>
void main()
{
	char str[100],word[20];
	int Null=0;
	printf("Enter a string=");
	gets(str);
	printf("Enter a word to search:");
	scanf("%s",word);
	if(strstr(str,word)== Null)
	{
		printf("word not found.\n");
	}
	else
	{
		printf("word found.\n");
	}
}
