#include <iostream>

using namespace std;

int main()
{
    // 소수
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, M = 0, total = 0, min = INT32_MAX;

    cin >> N >> M;

    for (int i = N; i <= M; i++) {
        bool found = false;
        if (i > 1) {
            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    found = true;
                    break;
                }
            }
        }
        else {
            found = true;
        }
        if (!found) {
            if (i < min) {
                min = i;
            }
            total += i;
        }
    }
    if (total == 0 || min == INT32_MAX) {
        cout << -1 << "\n";
    }
    else {
        cout << total << "\n" << min << "\n";
    }
}
