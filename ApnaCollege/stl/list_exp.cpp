#include <iostream>
#include <list>
using namespace std;

void basic_list()
{
    list<int> lst;
    lst.push_back(12);
    lst.push_back(344);
    lst.push_back(58);
    lst.push_front(23);
    lst.push_front(10);

    // iteration
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << endl;
    }

    // deleting elements in list
    lst.erase(lst.begin());
    cout << *lst.begin() << endl;
}

void displayRating(const list<int> &lst)
{
    cout << "Ratings" << endl;
    for (auto i = lst.begin(); i != lst.end(); i++)
    {
        cout << *i << endl;
    }
}

void sort_insert(int k, list<int> &l)
{
    for (auto i = l.begin(); i != l.end(); i++)
    {
        if (*i > k)
        {
            l.insert(i, k);
            return;
        }
    }
    l.push_back(k);
}
int main()
{

    list<int> ratings = {2, 4, 6, 9, 1, 7, 3, 8, 2, 9, 5, 7};
    list<int> beginner;
    list<int> pros;
    for (auto it = ratings.begin(); it != ratings.end(); it++)
    {
        int val = *it;
        if (val >= 1 && val <= 5)
        {
            sort_insert(val, beginner);
        }
        else if (val >= 6 && val <= 10)
        {
            sort_insert(val, pros);
        }
    }
    displayRating(beginner);
    displayRating(pros);
    return 0;
}