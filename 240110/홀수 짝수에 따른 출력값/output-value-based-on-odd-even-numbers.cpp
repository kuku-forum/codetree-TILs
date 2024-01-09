#include <iostream>

using namespace std;

// flag:0(false) -> even / flag:1(true) -> odd
int func(int n, bool flag){
    if(flag == true){
        if(1 > n)
            return 0;
        return n + func(n-2, true);
    }

    else{
        if(2 > n)
            return 0;
        return n + func(n-2, true);
    }
}

int main() {
    int N;
    cin >> N;
    cout << func(N, N%2);
    return 0;
}