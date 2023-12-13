#include <iostream>

using namespace std;

int main()
{
    // 소인수분해
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0;
    cin >> N;

    int div = 2;

    while (N != 1) {
        if (N % div != 0) {
            div++;
        }
        else {
            cout << div << "\n";
            N /= div;
        }
    }
}
