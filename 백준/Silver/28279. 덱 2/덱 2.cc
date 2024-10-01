#include <iostream>
#include <deque>

using namespace std;

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Deque(int command, deque<int> &d) {
    if (command == 1) {
        int n;
        cin >> n;
        d.push_front(n);
    } else if (command == 2) {
        int n;
        cin >> n;
        d.push_back(n);
    } else if (command == 3) {
        if (d.empty())
            cout << -1 << "\n";
        else {
            cout << d.front() << "\n";
            d.pop_front();
        }
    } else if (command == 4) {
        if (d.empty())
            cout << -1 << "\n";
        else {
            cout << d.back() << "\n";
            d.pop_back();
        }
    } else if (command == 5) {
        cout << d.size() << "\n";
    } else if (command == 6) {
        cout << (d.empty() ? 1 : 0) << "\n";
    } else if (command == 7) {
        if (d.empty())
            cout << -1 << "\n";
        else
            cout << d.front() << "\n";
    } else if (command == 8) {
        if (d.empty())
            cout << -1 << "\n";
        else
            cout << d.back() << "\n";
    }
}

int main() {
    fastIO();
    int n;
    cin >> n;
    deque<int> d;
    for (int i = 0; i < n; i++) {
        int command;
        cin >> command;
        Deque(command, d);
    }
}