#include <iostream>
#include <queue>

using namespace std;
void print(queue<int> line)
{
    cout << "The queue is as belows:" << endl;
    while (!line.empty())
    {
        cout << line.front() << endl;
        line.pop();
    }
    cout << "the line is empty" << endl;
}
int main()
{
    queue<int> line;
    line.push(12);
    line.push(23);
    line.push(34);
    line.push(45);
    print(line);
    cout << " the size of the queue:" << line.size() << endl;
    cout << "first element in the queue:" << line.front() << endl;
    cout << "the last in the line of queue:" << line.back() << endl;
    line.pop();
    print(line);

    return 0;
}