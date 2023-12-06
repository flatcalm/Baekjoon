#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for (int i = 97; i < 123; i++)
    {
        if (s.find((char)i)!= string::npos)
        {
            cout << s.find((char)i) << " ";
        }
        else {
            cout << -1 << " ";
        }
    }

    cout << endl;

    return 0;
}
