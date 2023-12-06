#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int N, total = 0;

    cin >> N >> s;

    for (int i = 0; i < N; i++)
    {
        total += s[i] - '0';
    }

    cout << total << endl;

    return 0;
}
