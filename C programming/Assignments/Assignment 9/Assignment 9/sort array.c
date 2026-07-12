#include <stdio.h>

void sortArray(int arr[], int size);

int main()
{
    int arr[] = {5, 2, 8, 1, 3};
    int size = 5;

    sortArray(arr, size);

    printf("Sorted array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}

void sortArray(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}