#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    for (int i = 1; i < n+1; ++i) {
        q.push(i);
    }
    while (q.size() != 1){
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}