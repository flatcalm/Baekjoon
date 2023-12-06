#include <iostream>

using namespace std;

int main()
{
    int count, num1, num2;

    try {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        cin >> count;

        for (int i = 0; i < count; i++) {
            cin >> num1 >> num2;

            cout << num1 + num2 << "\n";
        }
    }
    catch(exception) {
        cout << "error" << "\n";
    }

    return 0;
}
