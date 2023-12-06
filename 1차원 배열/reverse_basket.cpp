#include <iostream>

int main()
{
    int N = 0, M = 0, i = 0, j = 0;

    scanf("%d %d", &N, &M);

    int arr[N] = {};

    for (int x = 0; x < N; x++)
    {
        arr[x] = x + 1;
    }

    for (int x = 0; x < M; x++) {
        scanf("%d %d", &i, &j);

        i = i - 1, j = j - 1;
        for (i; i < j; i++) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    for (int x = 0; x < N; x++) {
        printf("%d ", arr[x]);
    }

    printf("\n");
}
