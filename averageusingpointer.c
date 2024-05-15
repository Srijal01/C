#include<stdio.h>
int main(void)
{
	float marks[10],sum=0;
	int i;
	float avg;
	printf("Enter marks of 10 students: ");
	for (i=0;i<10;i++)
	{
		scanf("%f",marks+i);
		sum+=*(marks+i);
	}
	avg=sum/10;
	printf("\nThe average is=%f\n",avg);
}

