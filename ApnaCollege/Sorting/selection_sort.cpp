#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}
int main()
{
    int arr[] = {12, 90, 23, 89, 45, 78, 56, 67};
    for (auto k : arr)
    {
        cout << k << " ";
    }
    cout << endl;
    selection_sort(arr, 8);
    cout << endl;
    for (auto k : arr)
    {
        cout << k << " ";
    }
    return 0;
}