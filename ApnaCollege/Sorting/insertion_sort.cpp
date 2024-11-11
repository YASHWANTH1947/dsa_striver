#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
// optimised insertion sort with linear complexity as best case
void insertion_sort_2(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int sorted = 0;
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            sorted = 1;
            j--;
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

    int arr2[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    insertion_sort_2(arr, 8);
    for (auto k : arr)
    {
        cout << k << " ";
    }

    return 0;
}