#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    int count_arr[26] = {};
    int maxValue = 0;
    char maxChar = ' ';
    bool isDuplicate = false;

    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
        count_arr[word[i] - 'A']++;

        if (count_arr[word[i] - 'A'] > maxValue)
        {
            maxValue = count_arr[word[i] - 'A'];
            maxChar = word[i];
            isDuplicate = false;
        }
        else if (count_arr[word[i] - 'A'] == maxValue)
        {
            isDuplicate = true;
        }
    }

    if (isDuplicate)
    {
        cout << "?\n";
    }
    else
    {
        cout << maxChar << "\n";
    }
}
