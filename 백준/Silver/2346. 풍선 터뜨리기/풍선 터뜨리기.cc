#include <iostream>
#include <deque>

using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main() {
    fastIO();
    int n, x;
    deque<pair<int, int>> deq;
    // 입력
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        deq.push_back({i + 1, x});
    }

    auto cur = deq.front();
    cout << cur.first << " ";
    deq.pop_front();


    while (!deq.empty()) {
        int move = cur.second;
        if (move > 0) move--;
        while (move != 0) {
            if (move > 0) { // 오른쪽으로 이동
                deq.push_back(deq.front());
                deq.pop_front();
                move--;
            } else { // 왼쪽으로 이동
                deq.push_front(deq.back());
                deq.pop_back();
                move++;
            }
        }
        cur = deq.front();
        cout << cur.first << " ";
        deq.pop_front();
    }
}
