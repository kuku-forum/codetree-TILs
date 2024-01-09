#include <iostream>

using namespace std;

int func(int n){
    if (10 > n)
        return n;
    
    return func(n/10) + (n%10);
}

int main() {
    int N = 1, temp;

    for (int i = 0; 3 > i; i++){
        cin >> temp;
        N *= temp;    
    }

    cout << func(N);

    return 0;
}