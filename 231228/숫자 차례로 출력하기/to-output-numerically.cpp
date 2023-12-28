#include <iostream>

using namespace std;

void upStream(int n){
    if (n == 0)
        return;

    upStream(n-1);
    cout << n << ' ';
}

void downStream(int n){
    if (n == 0)
        return;

    cout << n << ' ';
    downStream(n-1);
}
int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    upStream(N);
    cout << endl;
    downStream(N);

    return 0;
}