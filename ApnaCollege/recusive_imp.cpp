#include <iostream>
using namespace std;
int count = 0;
void recursive_one()
{

    // base condition to terminate the recursion.
    if (count == 100)
    {
        return;
    }
    cout << count << endl;
    count++;
    recursive_one();
}
void recursive_two(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << "Ben 10" << endl;
    recursive_two(n - 1);
}
void recursive_three(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    recursive_three(i + 1, n);
}
void recursive_four(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << endl;
    recursive_four(n - 1);
}
void recursive_five(int n)
{
    // backtracking recursive function
    if (n < 1)
    {
        return;
    }
    recursive_five(n - 1);
    cout << n << endl;
}
void recursive_six(int i, int n)
{
    // backtracking
    if (i > n)
    {
        return;
    }
    recursive_six(i + 1, n);
    cout << i << endl;
}

// sum of n numbers by parametric way
void sum_n(int n, int sum)
{
    if (n < 1)
    {
        cout << sum << endl;
        return;
    }
    sum_n(n - 1, sum + n);
}

// sum of n numbers by functional way
int sum_no(int n)
{
    if (n < 0)
    {
        return 0;
    }
    return n + sum_no(n - 1);
}
// factorial of n numbers by parametric method
void factorial_n(int n, int factorial)
{
    if (n < 1)
    {
        cout << factorial << endl;
        return;
    }
    factorial_n(n - 1, factorial * n);
}

// factorial of n numbers by functional methods
int factorial_no(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial_no(n - 1);
}
int main()
{

    cout << factorial_no(5) << endl;
    return 0;
}