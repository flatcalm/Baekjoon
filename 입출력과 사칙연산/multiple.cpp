#include <iostream>
#include <string>

using namespace std;

int main() {
    int x;
    string y;

    scanf("%d", &x);
    cin >> y;

    for (int i = y.length(); i > 0; i--) {
        printf("%d\n", x * (y[i - 1] - '0'));
    }

    printf("%d\n", x * stoi(y));

    return 0;
}
