#include <iostream>
#include "vector"
#include "algorithm"
#include <unordered_set>
#include <map>

using namespace std;

int main() {
    int num;
    cin >> num;
    string key, value;
    map<string, string, greater<string>> m;
    for (int i = 0; i < num; ++i) {
        cin >> key >> value ;
        if(value =="enter"){
          m.insert(make_pair(key,value));
        } else{
            m.erase(key);
        }
    }
    for(auto it : m){
        cout << it.first << "\n";
    }

}

