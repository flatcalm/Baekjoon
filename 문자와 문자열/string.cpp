#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int T;

    cin >> T;

    for (T; T > 0; T--) {
        cin >> s;
        cout << s.front() << s[s.length() - 1] << endl;
    }

    return 0;
}
