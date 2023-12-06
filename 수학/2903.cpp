#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N = 0, dot = 0, result = 0;

    cin >> N;

    for(int i = 0; i <= N; i++) {
        if(i == 0) {
            dot = 2;
        }
        else {
            dot = dot + (dot - 1);
        }
    }

    result = dot * dot;

    cout << result << "\n";
}
