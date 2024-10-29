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
    if (i > n)
    {
        return;
    }
    recursive_six(i + 1, n);
    cout << i << endl;
}

int main()
{
    recursive_six(1, 5);
    return 0;
}