#include <stdio.h>

void bubble_sort(int[], int);
void selection_sort(int[], int);
void print_arr(int[], int);

int main()
{
    int arr[] = {20, 12, 10, 15};
    int len = 4;

    printf("Bubble Sorting...\n");
    bubble_sort(arr, len);
    print_arr(arr, len);

    printf("Selection Sorting...\n");
    selection_sort(arr, len);
    print_arr(arr, len);

    return 0;
}

void bubble_sort(int array[], int size)
{
    for (int step = 0; step < size; step++)
    {
        for (int i = 0; i < size - step; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void selection_sort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;

        for (int i = step+1; i < size; i++)
        {
            if (array[i] < array[min_idx])
            {
                min_idx = i;
            }
        }
        int temp = array[min_idx];
        array[min_idx] = array[step];
        array[step] = temp;
    }
}

void print_arr(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}