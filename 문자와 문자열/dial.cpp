#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    string num_alphabet;
    int t = 0;

    cin >> num_alphabet;

    for (int i = 0; i < num_alphabet.length(); i++) {
        switch (num_alphabet[i])
        {
            case 'A':
            case 'B':
            case 'C':
                num_alphabet[i] = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                num_alphabet[i] = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                num_alphabet[i] = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                num_alphabet[i] = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                num_alphabet[i] = '6';
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                num_alphabet[i] = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                num_alphabet[i] = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                num_alphabet[i] = '9';
                break;
            default:
                exit(0);
        }
    }

    for (int i = 0; i < num_alphabet.length(); i++) {
        // t += stoi(string(1, num_alphabet[i])) + 1;
        t += (num_alphabet[i] - '0') + 1;
    }

    cout << t << endl;
 
    return 0;
}
