#include <iostream>

using namespace std;

int num = 1;

void upStream(int n){
    if (n == 0)
        return;

    cout << num++ << ' ';
    upStream(--n);
}

void downStream(int n){
    if (n == 0)
        return;

    cout << num-- << ' ';
    downStream(--n);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;
    upStream(N);
    cout << endl;
    num--;
    downStream(N);

    return 0;
}