#include<stdio.h>
int main(void)
{
	int p[2][3]={{1,2,3},{4,5,6}};
	printf("p=%p\np+1=%p\n",p,p+1);
	printf("*p=%p\n*(p+1)=%p\n",*p,*(p+1));
	printf("*(p+0)+1=%p\n*(p+1)+1=%p\n",*(p+0)+1,*(p+1)+1);
	printf("*(*(p+0)+1)=%d\n*(*(p+1)+1)=%d\n",*(*(p+0)+1),*(*(p+1)+1));
}

