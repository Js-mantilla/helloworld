#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!","Juan","Mantilla"};
    for (const string & word : msg)
    {
        cout << word << " ";
    }
    cout << "\n Termine";
    cout << endl;
    
}