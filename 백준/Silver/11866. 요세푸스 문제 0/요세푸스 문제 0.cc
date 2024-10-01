#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, k;
    queue<int> q;
    cin >> n >> k;
    for (int i = 1; i < n + 1; ++i) {
        q.push(i);
    }
    cout << "<";
    while (!q.empty()) {
        for (int i = 1; i < k; ++i) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front();
        q.pop();

        if (!q.empty()) {
            cout << ", ";
        }
    }
    cout << ">";
}