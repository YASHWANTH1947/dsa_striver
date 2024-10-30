#include <iostream>
#include <vector>
using namespace std;

long long factorial(long long n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

vector<long long> function(long long n)
{
    vector<long long> v;
    for (long long i = 1; i <= n; i++)
    {
        long long value = factorial(i);
        if (value <= n)
        {
            v.push_back(value);
        }
        else if (value > n)
        {
            break;
        }
    }
    return v;
}
int main()
{
    for (auto k : function(7))
    {
        cout << k << endl;
    }
    return 0;
}