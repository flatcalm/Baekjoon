#include <iostream>

int main()
{
    int N = 0, M = 0, i = 0, j = 0, k = 0;

    scanf("%d %d", &N, &M);

    int arr[N] = {};

    for (int x = 0; x < N; x++)
    {
        arr[x] = x + 1;
    }

    for (int x = 0; x < M; x++) {
        scanf("%d %d", &i, &j);

        k = arr[j - 1];
        arr[j - 1] = arr[i - 1];
        arr[i - 1] = k;
    }

    for (int x = 0; x < N; x++) {
        printf("%d ", arr[x]);
    }

    printf("\n");
}
