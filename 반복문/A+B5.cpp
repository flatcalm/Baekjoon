#include <iostream>

int main() {
    int a = 0, b = 0;

    while(true)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0) break;
        printf("%d\n", a + b);
    }

    return 0;
}
