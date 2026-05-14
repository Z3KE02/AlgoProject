#include <stdio.h>
#include <stdbool.h>

int missingInteger(int A[], int N)
{
    int num = 1;

    while (1)
    {
        bool found = false;

        for (int i = 0; i < N; i++)
        {
            if (A[i] == num)
            {
                found = true;
                break;
            }
        }

        if (found == false)
        {
            return num;
        }

        num++;
    }
}

int main()
{
    int A[] = {1, 3, 6, 4, 1, 2, 5, 8, 10, 7, 11, 100};

    int N = sizeof(A) / sizeof(A[0]);

    int result = missingInteger(A, N);

    printf("Smallest missing positive integer = %d\n", result);

    return 0;
}