/*function definition of add() function which takes two intigers and returns sum of them as integer*/
#include <stdio.h>
int add (int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
float areaOfCircle(float radius)
{
	return 3.1428*radius*radius;
}
int main(void)
{
	int a,b,mysum;
	float myfloat;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	mysum=add(a,b);
	printf("VALUE:%d\n",mysum);
	myfloat=areaOfCircle(mysum);
	printf("So the area of circle is:%f\n",myfloat);
}
