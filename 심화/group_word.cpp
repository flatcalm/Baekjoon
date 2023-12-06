#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    int t = 0, count = 0;
    bool flag = false;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> word;
		bool alphabet[26] = { false, };        
		alphabet[(int)(word[0]) - 97] = true;

		for (int i = 1; i < word.size(); i++) {
			if (word[i] == word[i - 1]) {
				continue;
			}
			else if(word[i] != word[i - 1] 
            		&& alphabet[(int)(word[i]) - 97] == true){
				count++;
				break;
			}
			else {
				alphabet[(int)(word[i]) - 97] = true;
			}
		}
    }
    cout << t - count << "\n";
}
