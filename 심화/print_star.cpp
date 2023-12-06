#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    char star = '*';
    scanf("%d", &n);

    for (int i = 1; i < 2 * n; i++)
    {
        int sn, bn;
        if (i <= n) sn = 2 * i - 1;
        else if(i > n) sn =  2 * n + 2 * (n - i) - 1;
        bn = (2 * n - 1 - sn) / 2;
        for (int j = 1; j <= bn; j++) {
            printf("%c", ' ');
        }
        for (int j = 1; j <= sn; j++) {
            printf("%c", star);
        }
        printf("\n");
    }
}
