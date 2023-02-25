#include <stdio.h>
 main() 
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int large, second_large;
    int i;

    large= arr[0];
    for (i = 1; i < 10; i++) 
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    second_large = arr[0];
    for (i = 1; i < 10; i++) 
    {
        if (arr[i] != large&& arr[i] > second_large) 
        {
            second_large = arr[i];
        }
    }

    printf("Second largest element = %d", second_large);

}
