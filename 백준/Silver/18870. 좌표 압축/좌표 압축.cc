#include "iostream"
#include "algorithm"
#include <vector>

using namespace std;

int main() {
    int n;
    int num;
    vector<int> v;
    vector<int> rank;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num); // 정렬 벡터
        rank.push_back(num); // 원본 벡터
    }
    sort(v.begin(), v.end()); 
    v.erase(unique(v.begin(), v.end()), v.end()); //정렬한 v 벡터의 중복값들을 unique로 뒤로 보내고 삭제
    for (int i = 0; i < n; i++) {
        cout << lower_bound(v.begin(), v.end(), rank[i]) - v.begin() << " ";
    }

}