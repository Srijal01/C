#include <stdio.h>
#include<string.h>
int main()
{
    int n, arr[100], i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
	{
        scanf("%s", &arr[i]);
    }
    j = i - 1;   
    i = 0;       
    while (i < j) 
	{
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    printf("Reversed array: ");
    for (i = 0; i < n; i++) 
	{
        printf("%s ", arr[i]);
    }
    return 0;
}
