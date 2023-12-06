#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string input;

    while(getline(cin, input))
    {
        cout << input << "\n";
    }

    return 0;
}
