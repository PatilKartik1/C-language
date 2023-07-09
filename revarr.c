#include <stdio.h>
int reverse(int arr[], int n);
int printarr(int arr[], int n);
int main()
{
    int arr[] = {11, 22, 33, 44, 55};
    reverse(arr, 5);
    printarr(arr, 5);
    return 0;
}

int printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int reverse(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];
        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}