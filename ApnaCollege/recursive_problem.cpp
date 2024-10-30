#include <bits/stdc++.h>
using namespace std;

// reverse an array
void reverse_array(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    reverse_array(i + 1, arr, n);
}

// check if string is palindrome
bool check_string_pallindrome(int i, string s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }
    return check_string_pallindrome(i + 1, s);
}
int main()
{
    int arr[5] = {12, 23, 34, 45, 56};
    reverse_array(0, arr, 5);
    for (auto k : arr)
    {
        cout << k << endl;
    }

    return 0;
}