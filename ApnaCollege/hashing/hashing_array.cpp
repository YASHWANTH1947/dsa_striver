#include <iostream>
using namespace std;
void number_hashing(int arr[], int n, int m)
{
    // n-> no.of elements in arary
    // m->max element of array
    int hash[m + 1] = {0};
    // pre compute
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "->" << hash[arr[i]] << endl;
    }
}

void string_hashing_lower(string s, char c)
{
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }
    cout << hash[c - 'a'] << endl;
}
void string_hashing_capital(string s, char c)
{
    //works for all 255 ascii code characters including numbers and symbols
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    cout << hash[c] << endl;
}
int main()
{

    string_hashing_capital("asgee_apple_Batte44", '4');
    return 0;
}