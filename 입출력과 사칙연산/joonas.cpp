#include <iostream>
#include <string>

int main() {
    std::string id;

    std::cin >> id;

    printf("%s\n", id.append("??!").c_str());

    return 0;
}
