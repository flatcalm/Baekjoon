#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string word, rword;

    cin >> word;
    
    for (int i = word.length() - 1; i >= 0; i--) {
        rword += word[i];
    }

    if (word == rword) {
        cout << 1 << "\n";
    } else {
        cout << 0 << "\n";
    }
}
