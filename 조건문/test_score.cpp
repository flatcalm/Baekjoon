#include <iostream>

int main() {
    int score = 0;

    scanf("%d", &score);

    if(score < 0 || score > 100) {
        exit(0);
    }
    else if (score > 89) {
        printf("A\n");
    }
    else if (score < 90 & score > 79) {
        printf("B\n");
    }
    else if (score < 80 & score > 69) {
        printf("C\n");
    }
    else if (score < 70 & score > 59) {
        printf("D\n");
    }
    else {
        printf("F\n");
    }

    return 0;
}
