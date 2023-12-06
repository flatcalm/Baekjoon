#include <iostream>

int main()
{
    bool assignment[30] = {};
    int i = 0, x = 0;
    
    for (int i = 0; i < 28; i++) {
        scanf("%d", &x);

        assignment[x - 1] = true;
    }

    for (int i = 0; i < 30; i++) {
        if (!assignment[i]) {
            printf("%d\n", i + 1);
        }
    }
}
