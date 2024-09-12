#include <iostream>
#include "vector"
#include "algorithm"
using namespace std;

void readVector(int num, vector<int> &vec) {
    int x;
    for (int i = 0; i < num; ++i) {
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());
}
void printVectcor(int num, vector<int> &vec) {
    for (int i = 0; i < num; ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int main() {
    int n, m;
    vector<int> v;
    vector<int> s;
    cin >> n;
    readVector(n, v);
    cin >> m;
    s.resize(m);
    for (int i = 0; i < m; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < m; ++i) {
        if (binary_search(v.begin(), v.end(), s[i]))
            cout << "1 ";
        else
            cout << "0 ";
    };
}

