#include <stdio.h>
int main() 
{
    int arr[10];
    int i, odd=0, even=0, odd_sum=0, even_sum=0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) 
	{
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) 
		{
            even++;
            even_sum += arr[i];
        } 
		else 
		{
            odd++;
            odd_sum += arr[i];
        }
    }
    printf("You entered:\n");
    for (i = 0; i < 10; i++) 
	{
        printf("%d ", arr[i]);
    }
    printf("\nNumber of even numbers: %d\n", even);
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Number of odd numbers: %d\n", odd);
    printf("Sum of odd numbers: %d\n", odd_sum);
    return 0;
}

