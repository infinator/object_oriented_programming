#include <stdio.h>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {20, 12, 10, 15};
    int len = 4;

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
	printf("\n");

    int element = 11;
    int loc = 3;
    len += 1;

    for (int i = len - 1; i >= loc; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[loc-1] = element;


    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
	printf("\n");
		
    return 0;
}