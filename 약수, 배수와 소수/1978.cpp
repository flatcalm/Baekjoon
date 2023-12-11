#include <iostream>

using namespace std;

int main()
{
    // 소수 찾기
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num = 1;
        bool found = false;
        cin >> num;
        if (num > 1) {
            for (int j = 2; j < num; j++) {
                if (num % j == 0) {
                    found = true;
                    break;
                }
            }
        } else {
            found = true;
        }
        if (!found) count++;
    }

    cout << count << "\n";
}
