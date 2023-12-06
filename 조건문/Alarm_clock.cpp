#include <iostream>

int main() {
    int h = 0, m = 0;

    scanf("%d %d", &h, &m);

    if (m < 45) {
        if (h < 1) {
            h = 24;
            h -= 1;
        }
        else {
            h -= 1;
        }
        m += 15;
    }
    else {
        m -= 45;
    }

    printf("%d %d\n", h, m);

    return 0;
}
