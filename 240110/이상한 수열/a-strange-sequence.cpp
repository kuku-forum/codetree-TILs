#include <iostream>

using namespace std;

int func(int n){
    if(n==2) return 2;
    else if(n==1) return 1;

    return func(n/3) + func(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.

    int N;
    cin >> N;
    cout << func(N);

    return 0;
}