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
    int A1[] = {1, 3, 6, 4, 1, 2};
    int n = sizeof(A1) / sizeof(A1[0]);
    printf("Test 1: A = [1, 3, 6, 4, 1, 2]\n");
    printf("Result: %d (Expected: 5)\n\n", missingInteger(A1, n));

    // int A[] = {1, 3, 6, 4, 1, 2, 5, 8, 10, 7, 11, 100};
    // int N = sizeof(A) / sizeof(A[0]);
    // int result = missingInteger(A, N);
    // printf("%d\n", result);
    return 0;
}
