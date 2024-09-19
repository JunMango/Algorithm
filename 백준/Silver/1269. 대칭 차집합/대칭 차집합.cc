#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <set>

using namespace std;


int main() {
    int n, m, a;
    set<int> s;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        s.insert(a);
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (s.find(a) == s.end()) { // 집합 s에서 앖디먄 s넣고
            s.insert(a);
        } else { // 있다면 지워라
            s.erase(a);
        }
    }
    cout << s.size() << endl;
}

