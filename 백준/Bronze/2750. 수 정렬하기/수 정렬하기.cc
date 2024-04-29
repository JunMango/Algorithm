#include<iostream>

using namespace std;

int main(void) { // 프로그램 시작
    ios_base::sync_with_stdio(false); // C++ 의 입출력 버퍼와 c의 입출력 버퍼를 동기화 하지 않도록 설정합니다.
    cin.tie(NULL); // cin과 cout이 동기화되지 않도록 설정합니다.
    cout.tie(NULL); // cout과 cin이 동기화되지 않도록 설정합니다.
    int arr[10001] = {0}; // 길이가 10001 인 배열을 0 초기화
    int n, count; // n, count 선언
    cin >> n; // n 입력
    for (int i = 0; i < n; i++) { // 반복문 시작  i 는 입력받은 n 보다 작게 1씩 증가 하면서 반복문
        cin >> count; // 선언한 count 변수를 입력 받는다.
        arr[count]++; // 입력받은 count를  arr의 배열의 index로써 사용한다.
    }
    // arr[i] 의 형태가 궁금하면 찍어보자
//    for (int i = 0; i < n; ++i) {
//        cout << arr[i] << " ";
//    }
    for (int i = 1; i < 10001; i++) { // 0은 의미가 없으므로 1부터 시작한다.
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n'; // arr[count]로 할당한 숫자들이 몇번 인덱스 인지 그리고 몇개(count)가 있는지 출력한다.
        }
    }
}
