#include <iostream>

int main() {
    int T; // 테스트 케이스의 개수
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int x, y; // 현재 위치 x와 목표 위치 y
        std::cin >> x >> y;

        // 현재 위치 x에서 목표 위치 y까지 이동하는데 필요한 최소 작동 횟수 계산
        int distance = y - x; // 거리
        int moves = 0; // 작동 횟수

        // 이동 거리가 1, 2, 3, ... 광년 단위로 나눌 수 있을 때
        // 1, 2, 3, ... 광년만큼을 이동하고 작동 횟수를 늘린다.
        while (distance > 0) {
            if (distance >= 2 * moves + 1) {
                distance -= 2 * moves + 1;
                moves++;
            } else {
                // 이동 거리가 남았지만, 작동 횟수를 더 늘릴 필요가 없는 경우
                // 마지막 이동은 1광년으로 한다.
                moves += 1;
                break;
            }
        }

        std::cout << moves << std::endl;
    }

    return 0;
}
