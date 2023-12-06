#include <iostream>

int main()
{
    int x = 0, assignment[30] = {};
    bool assignment2[30] = {};

    for (int i = 0; i < 30; i++) {
        assignment[i] = i + 1;
    }
    
    for (int i = 0; i < 28; i++) {
        scanf("%d", &x);
        bool exists = false;

        for (int j = 0; j < 30; j++) {
            if (x == assignment[j]) {
                exists = true;
                assignment2[j] = exists;
                break;
            }
        }
    }

    for (int i = 0; i < 30; i++) {
        if (!assignment2[i]) {
            printf("%d\n", assignment[i]);
        }
    }
}
