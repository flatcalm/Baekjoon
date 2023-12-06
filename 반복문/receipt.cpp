#include <iostream>

int main() {
    int X = 0, N = 0, a = 0, b = 0, Y  = 0;

    scanf("%d", &X);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &a, &b);
        Y += a * b;
    }

    if (Y == X) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}
