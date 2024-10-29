#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;
int main()
{

    map<string, string> colour;
    colour.insert(pair<string, string>("apple", "red"));
    colour.insert(pair<string, string>("strawberry", "pink"));
    colour.insert(pair<string, string>("spinach", "green"));
    colour.insert(pair<string, string>("bannana", "yellow"));
    colour.insert(pair<string, string>("dates", "black"));
    // data is stored inside a map in ascending ordere
    colour["coconut"] = "brown";
    for (auto k : colour)
    {
        cout << k.first << "-" << k.second << endl;
    }
    cout << "the color of banana:" << colour["bannana"] << endl;
    cout << "the size of colour :" << colour.size() << endl;
    // map of lists
    map<string, list<string>> pokedex;
    list<string> charlizard = {"Dragon breath", "heat wave", "Fire spin"};
    list<string> moltres = {"Safe guard", "Ancient power", "Incinerate"};
    list<string> groudon = {"earth power", "Lava Plume", "Mud shot"};
    pokedex["Charlizard"] = charlizard;
    pokedex["Moltress"] = moltres;
    pokedex["Groudon"] = groudon;

    for (auto k : pokedex)
    {
        cout << k.first << "->" << endl;
        for (auto i : k.second)
        {
            cout << i << "," << endl;
        }
    }

    return 0;
}