#include <iostream>

int main() {
    int a = 0, b = 0, c = 0, max = 0, reward = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b & a == c) {
        reward = 10000 + a * 1000;
    }
    else if (a == b | a == c | b == c) {
        max = a == b | a == c ? a : b;
        reward = 1000 + max * 100;
    }
    else {
        max = ((a > b) && (a > c)) ? a : ((b > a) && (b > c)) ? b : c;
        reward = max * 100;
    }

    printf("%d\n", reward);

    return 0;
}
