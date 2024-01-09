#include <iostream>

using namespace std;

void func(int n){

    if (n == 0)
        return;

    cout << n << ' ';
    func(n - 1);
    cout << n << ' ';

}

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin >> N;

    func(N);

    return 0;
}