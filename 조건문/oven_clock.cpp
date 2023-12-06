#include <iostream>

int main() {
    int h = 0, m = 0, cook_minute = 0;

    scanf("%d %d", &h, &m);
    scanf("%d", &cook_minute);

    if (m + cook_minute > 59) {
        if ((h + (m + cook_minute) / 60) > 23) {
            h = (h + (m + cook_minute) / 60) - 24;
        }
        else {
            h += (m + cook_minute) / 60;
        }
        m = (m + cook_minute) % 60;
    }
    else {
        m += cook_minute;
    }

    printf("%d %d\n", h, m);

    return 0;
}
