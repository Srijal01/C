#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
	{
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++)
	{
        for (j=i+1;j<n;)
		{
            if (arr[j] == arr[i])
			{
                for (k = j; k<n-1;k++)
                    arr[k]=arr[k+1];
                n--;
            } 
			else (j++);
        }
    }
    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++)
	{
        printf("%d ", arr[i]);
    }
    return 0;
}



