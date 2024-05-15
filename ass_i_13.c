#include <stdio.h>
int main() 
{
    int arr[10];
    int i, sum = 0;
    float avg;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avg = (float) sum / 10;
    printf("You entered:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\nTotal: %d\n", sum);
    printf("Average: %.2f\n", avg);
    return 0;
}

