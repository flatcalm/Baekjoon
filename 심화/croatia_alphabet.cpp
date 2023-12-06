#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    int count = 0;

    cin >> word;

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == 'c') {
            if (word[i + 1] == '=' || word[i + 1] == '-') {
            }
            else {
                count++;
            }
        }
        else if (word[i] == 'd') {
            if (word[i + 1] == '-') {
            }
            else if (word[i + 1] == 'z' && word[i + 2] == '=') {
                count--;
            }
            else {
                count++;
            }
        }
        else if (word[i] == 'l' || word[i] =='n') {
            if (word[i + 1] == 'j') {
            }
            else {
                count++;
            }
        }
        else if (word[i] == 's') {
            if (word[i + 1] == '=') {
            }
            else {
                count++;
            }
        }
        else if (word[i] == 'z') {
            if (word[i - 1] != 'd' && word[i + 1] == '=') {
            }
            else {
                count++;
            }
        }
        else {
            count++;
        }
    }

    cout << count << "\n";
}
