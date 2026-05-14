#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int missingInt(int arr[], int n)
{
    insertionSort(arr, n);

    int missing = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 0)
            continue;

        if (arr[i] == missing)
        {
            missing++;
        }

        else if (arr[i] > missing)
        {
            break;
        }
    }

    return missing;
}

int main()
{
    int arr[] = {1, 3, 6, 4, 1, 2,5,7,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = missingInt(arr, n);

    printf("Smallest missing positive integer = %d\n", result);

    return 0;
}
