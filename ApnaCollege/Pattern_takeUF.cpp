#include <bits/stdc++.h>
using namespace std;

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    // rows
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    int stars;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        i > n ? stars = 2 *n - i : stars = i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int start;
    for (int i = 0; i < n; i++)
    {
        i % 2 == 0 ? start = 1 : start = 0;
        for (int j = 0; j < i + 1; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    int space = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n)
{
    int k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k += 1;
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - 1 - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17(int n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        // forward space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // alphabets
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            (j >= i) ? ch-- : ch++;
        }

        // backward space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'E' - i; j <= 'E'; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern19(int n)
{

    int space = 0;
    // first half
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        space += 2;
        cout << endl;
    }

    // second half
    space = 2 * n - 2;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        space -= 2;
        cout << endl;
    }
}
void exp(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char j = 'A' + n - 1; j >= 'A' + (n - 1) - i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern20(int n)
{
    int space = 2 * n - 2;
    int stars;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        (i > n) ? stars = 2 *n - i : stars = i;
        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        (i >= n) ? space += 2 : space -= 2;
        cout << endl;
    }
}
void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    // Pattern-1
    //  for (int i = 0; i < 4; i++)
    //  {
    //      for (int j = 0; j < 4; j++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }

    // Pattern 2
    //  for (int i = 0; i < 5; i++)
    //  {
    //      for (int j = 0; j <= i; j++)
    //      {
    //          cout << "*";
    //      }
    //      cout << endl;
    //  }
    pattern21(5);
    return 0;
}