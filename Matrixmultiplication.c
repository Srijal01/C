#include <stdio.h>
int main(void)
{
	int i,j,k,m,n,f[10][10],s[10][10],mt[10][10],sum=0;
	printf("Rows and Columns\n");
	scanf("%d%d",&m,&n);
	printf("\nEnter First Matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++);
		{
			scanf("%d",f[i][j]);
		}
	}
	printf("\nEnter Second Matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++);
		{
			scanf("%d",s[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				sum+=f[i][k]*s[k][j];
			}
			mt[i][j]=sum;
			sum=0;
		}
	}
	printf("\n\nMatrix Multiplication\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",mt[i][j]);
		}
		printf("\n");
	}
}
