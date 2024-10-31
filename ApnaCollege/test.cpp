#include <iostream>
#include <bits/stdc++.h>
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
string alpha(string s)
{
    string word = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (isalnum(s[i]))
        {
            word += s[i];
        }
    }
    return word;
}
int main()
{
    string word = alpha("A man, a plan, a canal: Panama");
    cout << word;
    return 0;
}