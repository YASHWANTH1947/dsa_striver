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

// fibonacii series nth term
int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int a = fibonacci(n - 1);
    int b = fibonacci(n - 2);
    return a + b;
}
int main()
{
    cout << fibonacci(5);

    return 0;
}