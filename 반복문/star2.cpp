#include <iostream>

int main()
{
    int n = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--) {
            if (j > i) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
