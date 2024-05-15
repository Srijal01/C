#include <stdio.h>
int main() {
    int arr[10];
    int i, max, min;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 10; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
        if (arr[i] < min) 
		{
            min = arr[i];
        }
    }
    printf("You entered:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\nMaximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    return 0;
}

