#include <stdio.h>
int main()
{
    char arr[100];
    int i;
    printf("Enter a string: ");
    for(i=0;i<100;i++)
    {
        arr[i]=getchar();
        if(arr[i]=='\n')
            break;
    }
    printf("Output: ");
    for(i=0;arr[i]!='\n';i++)
        putchar(arr[i]==' '||arr[i]=='\t'?'*':arr[i]);
    return 0;
}

