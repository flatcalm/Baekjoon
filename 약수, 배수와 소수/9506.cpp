#include <iostream>

using namespace std;

int main()
{
    // 약수들의 합
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;

    while (true) {
        cin >> n;

        if (n == -1) break;

        int arr[abs(n)] = {0, }, count = 0;

        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                arr[count] = i;
                count++;
            }
        }

        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum += arr[i];
        }

        if (sum == n) {
            cout << n << " = ";
            for (int i = 0; i < count; i++) {
                if (i < count - 1) {
                    cout << arr[i] << " + ";
                }
                else {
                    cout << arr[i] << "\n";
                }
            }
        }
        else {
            cout << n << " is NOT perfect." << "\n";
        }
    }
}
