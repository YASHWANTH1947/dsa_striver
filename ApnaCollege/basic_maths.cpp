#include <iostream>
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
int main()
{

    extractDigits(2024);
    return 0;
}