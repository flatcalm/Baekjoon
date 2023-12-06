#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, v;
    cin >> a >> b >> v;

    int day = 0;
    day = ceil((double) (v - a) / (a - b)) + 1;

    cout << day << "\n";
}
