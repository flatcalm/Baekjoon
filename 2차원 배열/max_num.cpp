#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int max = 0, line = 0, row = 0, num[9][9] = {};

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> num[i][j];
            if (num[i][j] >= max) {
                max = num[i][j];
                line = i;
                row = j;
            }
        }
    }

    cout << max << "\n" << line + 1 << " " << row + 1 << "\n";
}
