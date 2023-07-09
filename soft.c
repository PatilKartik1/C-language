#include <stdio.h>

int countOdd(int arr[], int n);
int Reverse(int arr[], int n);
void printarr(int arr[], int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Reverse(arr, 5);
    printarr(arr, 5);
    return 0;
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int Reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secontval = arr[n - i - 1];
        arr[i] = secontval;
        arr[n - i - 1] = firstval;
    }
}

int countOdd(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}
