#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string result = "", word[5];

    for (int i = 0; i < 5; i++)
    {
        getline(cin, word[i]);
    }

    result.reserve(5 * 15);

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < word[j].size())
                result += word[j][i];
        }
    }

    cout << result << "\n";
    return 0;
}
