#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 0;

    cin >> T;

    for (int i = 0; i < T; i++) {
        int C = 0, quarter = 0, dime = 0, nickel = 0, penny = 0;
        cin >> C;

        while (1)
        {
            if (C == 0) break;
            else if (C >= 25) {
                quarter = C / 25;
                C = C % 25;
            }
            else if (C >= 10) {
                dime = C / 10;
                C = C % 10;
            }
            else if (C >= 5) {
                nickel = C / 5;
                C = C % 5;
            }
            else {
                penny = C / 1;
                C = C % 1; // C = 0
            }
        }

        cout << quarter << " " << dime << " " << nickel << " " << penny << "\n";
    }
}
