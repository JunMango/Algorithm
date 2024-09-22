#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <set>
#include <stack>

using namespace std;

int main() {
    int num, cnt = 1;
    int student;
    stack<int> st1;
    cin >> student;

    while (student--) {
        cin >> num;
        if (num == cnt) {
            cnt++;
        } else {
            st1.push(num);
        }
        while (!st1.empty() && st1.top() == cnt) {
            st1.pop();
            cnt++;
        }
    }
    if (st1.empty())
        cout << "Nice" << '\n';
    else
        cout << "Sad" << '\n';
}

