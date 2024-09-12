#include <iostream>
#include "vector"
#include "algorithm"
#include <unordered_set>
using namespace std;

void readVector(int num, vector<string> &vec) {
    string x;
    for (int i = 0; i < num; ++i) {
        cin >> x;
        vec.push_back(x);
    }
};

void compareLan(int n, int m, const vector<string> &v, const vector<string> &s) {
    unordered_set<string> set_v(v.begin(), v.end());
    int x = 0;

    for (const string &str : s) {
        if (set_v.find(str) != set_v.end()) {
            x++;
        }
    }

    cout << x;
};
int main() {
    int n, m;
    cin >> n;
    cin >> m;
    vector<string> v;
    vector<string> s;
    readVector(n, v);
    readVector(m, s);
//    cout << "정답은~" << endl;
    compareLan(n, m, v, s);
}
