#include <iostream>

using namespace std;

int main()
{
    // 약수 구하기
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, k = 0;
    cin >> n >> k;

    int count = 0, arr[10000] = {0, };
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr[count] = i;
            count++;
        }
    }

    cout << arr[k - 1] << "\n";
}
