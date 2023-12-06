#include <iostream>

int main()
{
    int n = 0, min = 0, max = 0;

    scanf("%d", &n);

    int arr[n] = {};

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("%d %d\n", min, max);

}
