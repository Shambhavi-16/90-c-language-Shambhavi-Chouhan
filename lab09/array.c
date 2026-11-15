#include <stdio.h>

int main()
{
    printf("My name is Shambhavi Chouhan\n");
    int arr[5];
    int i;

    printf("Enter 5 elements:\n");

    // Taking input
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Displaying array elements
    printf("Array elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
