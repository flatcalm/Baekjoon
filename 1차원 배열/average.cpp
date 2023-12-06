#include <iostream>
#include <algorithm>

int main()
{
    int N = 0, M = INT32_MIN;
    double total = 0.0, average = 0.0;

    scanf("%d", &N);

    int scores[N] = {};

    for (int i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }

    M = *std::max_element(scores, scores + N);

    for (int i = 0; i < N; i++) {
        total += (double) scores[i] / M * 100;
    }

    average = (double) total / N;

    printf("%G\n", average);
}
