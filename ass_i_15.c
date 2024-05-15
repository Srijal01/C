#include <stdio.h>
int main() 
{
    int arr[10];
    int i, num, found = 0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search:\n");
    scanf("%d", &num);
    for (i = 0; i < 10; i++) 
	{
        if (arr[i] == num) 
		{
            found = 1;
            break;
        }
    }
    if (found) 
	{
        printf("%d is present at index %d.\n", num, i);
    } 
	else 
	{
        printf("%d is not present in the array.\n", num);
    }
    return 0;
}

