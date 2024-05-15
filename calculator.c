#include<stdio.h>
int add(int, int);
int sub(int, int);
void main()
{
	int a,b,choice;
	printf("Select any one from the below\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter Any Options(1-4)");
	scanf("%d",&choice);
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
		case 1:
		printf("Your sum is %d",add(a,b));
		break;
		case 2:
		sub(a,b);
		break;
		defalt:
		printf("Enter only given options\n");	
	}
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	printf("Your Subtracted value is %d\n",a-b);
}
