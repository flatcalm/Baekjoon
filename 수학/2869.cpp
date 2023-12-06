#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, v;
    cin >> a >> b >> v;

    int result = a, day = 1;
    while (result < v) {
        ++day;
        result += (a - b);
    }

    cout << day << "\n";
}
