#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int king, queen, rook, bishop, knight, pawn;
    cin >> king >> queen >> rook >> bishop >> knight >> pawn;
    cout << 1 - king << " " << 1- queen << " " << 2 - rook << " " << 2 - bishop << " " << 2 - knight << " " << 8 - pawn << "\n";

    return 0;
}
