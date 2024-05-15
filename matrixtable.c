#include <stdio.h>
int main()
{
	int matrix[3][3],i,j;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("Enter Matrix[%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("The entered matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix[i][j]);
		}
		printf("\n");
	}
}
