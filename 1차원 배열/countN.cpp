#include <iostream>

int main() {
    int n = 0, num = 0, count = 0;

    scanf("%d", &n);

    int arr[n] = {};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
