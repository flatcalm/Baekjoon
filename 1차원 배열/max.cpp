#include <iostream>

int main()
{
    int count = 0, max = 0, arr[9] = {};

    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (int i = 0; i < 9; i++) {
        if (arr[i] > max) {
            max = arr[i];
            count = i;
        }
    }

    printf("%d\n%d\n", max, count + 1);
}
