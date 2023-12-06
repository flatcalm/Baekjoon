#include <iostream>

using namespace std;

int main()
{
    int i, count, num1, num2;
    double result;

    try {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        cin >> count;

        for (i = 0; i < count; i++) {
            cin >> num1 >> num2;
            result = static_cast<double>(num1) + num2;
            cout << result << "\n";
        }
    }
    catch (const exception& e) {
        cout << "An exception occurred: " << e.what() << "\n";
    }

    return 0;
}
