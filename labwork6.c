#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 100

void inputArray(int arr[], int size);
void printArray(int arr[], int size);
int sumArray(int arr[], int size);
double averageArray(int arr[], int size);
int minArray(int arr[], int size);
int maxArray(int arr[], int size);

int main()
{
    int arr[MAX_SIZE];
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    if(size > MAX_SIZE || size <= 0)
    {
        printf("Error: Invalid size. Size should be between 1 to %d", MAX_SIZE);
        return -1;
    }

    printf("Enter %d elements in the array: ", size);
    inputArray(arr, size);

    printf("\nElements in the array are: ");
    printArray(arr, size);

    printf("\nSum of all elements = %d", sumArray(arr, size));
    printf("\nAverage of all elements = %.2lf", averageArray(arr, size));
    printf("\nMinimum element = %d", minArray(arr, size));
    printf("\nMaximum element = %d", maxArray(arr, size));

    return 0;
}

void inputArray(int arr[], int size)
{
    int i;

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d, ", arr[i]);
    }
}

int sumArray(int arr[], int size)
{
    int sum = 0;
    int i;
    for(i=0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

double averageArray(int arr[], int size)
{
    return (double)sumArray(arr, size) / size;
}

int minArray(int arr[], int size)
{
    int min = INT_MAX;
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int maxArray(int arr[], int size)
{
    int max = INT_MIN;
    int i;
    for(i=0; i<size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
