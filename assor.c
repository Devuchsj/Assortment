#include <stdio.h>

main() 
{
    int arr[10] = {-1, 2, -3, 4, 5, -6, 7, 8, -9, 10};
    int i;

    printf("Negative elements in the array : ");
    for (i = 0; i < 10; i++) 
    {
        if (arr[i] < 0) 
        {
            printf("%d ", arr[i]);
        }
    }
}
