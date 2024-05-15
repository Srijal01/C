#include <stdio.h>
int marks(int s1,int s2)
{
	int marks;
	marks = s1+s2;
	return marks;
}
float myPercentage (float marks)
{
	return marks/200*100;
}
int main(void)
{
	int s1,s2,marksGotInExams;
	float myfloat;
	printf("Enter two marks\n");
	scanf("%d%d",&s1,&s2);
	marksGotInExams=marks(s1,s2);
	printf("marks:%d\n",marksGotInExams);
	myfloat=myPercentage(marksGotInExams);
	printf("So the percentage is:%f\n",myfloat);
}
