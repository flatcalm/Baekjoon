#include <iostream>

int main() {
    int x = 0, y = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > 0) {
        if (y > 0) {
            printf("1\n");
        }
        else if (y < 0) {
            printf("4\n");
        }
    }
    else if (x < 0) {
        if (y > 0) {
            printf("2\n");
        }
        else if (y < 0) {
            printf("3\n");
        }
    }

    return 0;
}
