#include <iostream>

using namespace std;

int func(int n){
    if (n == 0)
        return 0;

    return n + func(n - 1);
}

int main() {

    int N;
    cin >> N;

    cout << func(N);

    return 0;
}