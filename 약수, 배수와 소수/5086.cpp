#include <iostream>

using namespace std;

int main()
{
    // 배수와 약수
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a = 1, b = 1;

    while(a != 0 && b != 0) {
        cin >> a >> b;
        if (a < b) {
            if (b % a == 0) {
                cout << "factor" << "\n";
            }
            else {
                cout << "neither" << "\n";
            }
        }
        else if (a > b) {
            if (a % b == 0) {
                cout << "multiple" << "\n";
            }
            else {
                cout << "neither" << "\n";
            }
        }
    }
}
