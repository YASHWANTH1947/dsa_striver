#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;

void extractDigits(int n)
{
    cout << "the digits of " << n << endl;
    while (n > 0)
    {
        int digit = n % 10;
        cout << digit << endl;
        n = n / 10;
    }
}
void countDigits(int n)
{
    int count = 0;
    int m = n;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    cout << "the no.of digits in " << m << ": " << count;
}
void reverseDigit(int n)
{
    int m = n;
    int revn = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        revn = (revn * 10) + lastdigit;
    }
    cout << "the reversal of:" << m << "->" << revn << endl;
}
void checkPalindrome(int n)
{
    int m = n;
    int rev = 0;
    while (n != 0)
    {
        int ld = n % 10;
        if (rev > INT_MAX / 10 && rev < INT_MIN / 10)
        {
            cout << "out of bounds" << endl;
        }
        rev = rev * 10 + ld;
        n = n / 10;
    }
    (rev == m) ? cout << "it is palindrome" << endl : cout << "it is not palindrome" << endl;
}
void checkAmstrong(int n)
{
    // for 3 digit number
    int sum = 0, m = n;
    while (n != 0)
    {
        int ld = n % 10;
        sum += ld * ld * ld;
        n = n / 10;
    }
    if (sum == m)
    {
        cout << "the number is a armstrong number" << endl;
    }
    else
    {
        cout << "the number is not armstrong number" << endl;
    }
}
void findDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
            cout << n / i << endl;
        }
    }
}
void checkPrime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != 1)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "the number is prime" << endl;
    }
    else
    {
        cout << "the number is not prime" << endl;
    }
}
void gcd(int n, int m)
{
    int hcf = 0;
    for (int i = 1; i <= (min(m, n)); i++)
    {
        if (m % i == 0 && n % i == 0)
        {
            if (i >= hcf)
            {
                hcf = i;
            }
        }
    }
    cout << "the hcf of the numbers is:" << hcf << endl;
}
int main()
{

    gcd(12, 36);
    return 0;
}