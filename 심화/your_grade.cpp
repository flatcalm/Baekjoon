#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string major[20], rating[20];
    double grade[20] = {0.0}, rating_num[20] = {0.0}, grade_sum = 0.0, major_sum = 0.0;

    for (int i = 0; i < 20; i++) {
        cin >> major[i] >> grade[i] >> rating[i];

        if (rating[i] == "P") {
            continue;
        }
        else {
            if (rating[i] == "A+") {
                rating_num[i] = 4.5;
            }
            else if (rating[i] == "A0") {
                rating_num[i] = 4.0;
            }
            else if (rating[i] == "B+") {
                rating_num[i] = 3.5;
            }
            else if (rating[i] == "B0") {
                rating_num[i] = 3.0;
            }
            else if (rating[i] == "C+") {
                rating_num[i] = 2.5;
            }
            else if (rating[i] == "C0") {
                rating_num[i] = 2.0;
            }
            else if (rating[i] == "D+") {
                rating_num[i] = 1.5;
            }
            else if (rating[i] == "D0") {
                rating_num[i] = 1.0;
            }
            else if (rating[i] == "F") {
                rating_num[i] = 0.0;
            }
            grade_sum += grade[i];
            major_sum += grade[i] * rating_num[i];
        }
    }

    cout << major_sum / grade_sum << "\n";
}
