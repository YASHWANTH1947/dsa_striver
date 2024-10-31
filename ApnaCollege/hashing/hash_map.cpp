#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
void number_map(int arr[], int size)
{
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto k : mpp)
    {
        cout << k.first << "->" << k.second << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 1, 3, 2, 3, 3, 1, 4, 6, 7, 8};
    number_map(arr, 12);

    return 0;
}