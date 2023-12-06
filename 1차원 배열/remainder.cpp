#include <iostream>
#include <set>

int main()
{
    int x;
    std::set<int> s;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &x);

        s.insert(x % 42);
    }

    printf("%d\n", s.size());
}
