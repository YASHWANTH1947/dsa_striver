#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // important functions: empty,size,push,pop,top
    stack<int> stk;
    stk.push(100);
    stk.push(200);
    stk.push(300);
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;
    if (stk.empty())
    {
        cout << "the stack is empty" << endl;
    }
    else
    {
        cout << " the stack is not empty" << endl;
    }
    cout << "Size of the stack, stk is:" << stk.size() << endl;

    return 0;
}