#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, ret = 1, max = 1, add = 6;

    cin >> N;

    while (1) {
		if (N <= max) break;

		max += add;
		add += 6;
		++ret;
	}

    cout << ret << "\n";
}
