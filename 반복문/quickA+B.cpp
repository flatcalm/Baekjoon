#include <iostream>

int main() {
    int T = 0, a = 0, b = 0;

    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
