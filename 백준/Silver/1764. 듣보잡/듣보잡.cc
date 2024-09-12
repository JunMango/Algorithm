#include <iostream>
#include "vector"
#include "algorithm"
#include <unordered_set>
#include <map>

using namespace std;

void readVector(int &num, vector<string> &vec) {
    string str;
    for (int i = 0; i < num; ++i) {
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end());
}

int main() {
    int n, m;
    vector<string> vec1;
    vector<string> vec2;
    vector<string> vec3;
    cin >> n >> m;
    readVector(n, vec1);
    readVector(m, vec2);
    for (int i = 0; i < n; ++i) {
        if (binary_search(vec2.begin(), vec2.end(), vec1[i])){
            vec3.push_back(vec1[i]);
        }
    }
    cout << vec3.size() << endl;
    for (int i = 0; i < vec3.size() ; ++i) {
        cout << vec3[i] <<'\n';
    }

}

