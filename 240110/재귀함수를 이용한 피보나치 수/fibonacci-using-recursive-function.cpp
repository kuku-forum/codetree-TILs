#include <iostream>

using namespace std;

int func(int n){
    if (n == 1)
        return 1;
    else if (n == 2)
        return 1;

    return func(n-1) + func(n-2);
}

int main() {
    int N;
    cin >> N;

    cout << func(N);

    return 0;
}