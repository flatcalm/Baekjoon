#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    int B = 0, result = 0;

    cin >> N >> B;

    result = stoi(N, nullptr, B);

    cout << result << "\n";
}
