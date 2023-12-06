#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N, result = "";
    int B = 0, quotient = 0, remain = 0;

    cin >> N >> B;

    quotient = stoi(N);

    while (quotient >= B) {
        remain = quotient % B;
        quotient /= B;

        if (B > 10 && remain >= 10) {
            result = (char) (remain - 10 + 'A') + result;
        }
        else {
            result = to_string(remain) + result;
        }
    }

    if (B > 10 && quotient >= 10){
        result = (char) (quotient - 10 + 'A') + result;
    }
    else {
        result = to_string(quotient) + result;
    }

    cout << result << "\n";
}
