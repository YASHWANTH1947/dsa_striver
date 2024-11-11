#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// optimised bubble sort with linear time complexity
void bubble_sort_2(int arr[], int n)
{
    for (int i = n - 1; i >= 1; i--)
    {
        int sorted = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 1;
            }
        }
        if (sorted == 0)
        {

            cout << "array is sorted" << endl;
            break;
        }
    }
}

int main()
{
    int arr[] = {90, 12, 89, 34, 78, 45, 67, 56};
    bubble_sort(arr, 8);
    int arr2[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    bubble_sort_2(arr2, 9);

    return 0;
}