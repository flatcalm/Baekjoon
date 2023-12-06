#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[100][100] = {}, x = 0, y = 0, count = 0, area = 0;

    cin >> count;

    for (int i = 0; i < count; i++) {
        cin >> x >> y;

        for (int j = x; j < x + 10; j++) {
            for (int k = y; k < y + 10; k++) {
                if (++arr[j][k] == 1)
                    area++;
            }
        }
    }
    cout << area << "\n";
}
