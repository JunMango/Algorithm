#include "iostream"
#include "algorithm"
#include <vector>

using namespace std;
bool compare (pair<int,string> a, pair<int, string>b){
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int age;
    string name;
    vector<pair<int, string >> v;
    for (int i = 0; i < n; i++) {
        cin >> age;
        cin >> name;
        v.push_back({age, name});
    }
    stable_sort(v.begin(), v.end(),compare);
    // 이 문제에서는 sort 함수를 쓰면 안된다.
    // 왜냐 하면  sort는 퀵정렬알고리즘으로 불안정 정렬의 특징을 가지기 때문에 같은 키값의 원소들의 정렬이 뭔래의 순서를 보장해주지 않기 때문이다.
    // 그러므로 같은 키 값의 원소들의 정렬을 보장 받고 싶다면 STL 의 stable_sort를 사용해야 한다.
    for (int i = 0; i < n; i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }

}
