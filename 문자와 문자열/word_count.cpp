#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    int count = 0, npos = 0;

    getline(cin, s);

    npos = s.find_first_not_of(' ');
	s.erase(0, npos);
    npos = s.find_last_not_of(' ');
	s.erase(npos+1);

    if (!s.empty()) {
        count++;
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') count++;
    }

    cout << count << "\n";

    return 0;
}
