#include<stdio.h>
void swap(int,int);
int main(void)
{
	int a=99,b=98;
	printf("BEFORE function calling a and b are : %d\t%d\n",a,b);
	swap(a,b);
	printf("After calling function, a and b are: %d\t%d\n",a,b);
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("The value within functions are %d\t%d\n",x,y);
}
