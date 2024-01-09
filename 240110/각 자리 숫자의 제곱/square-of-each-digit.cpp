#include <iostream>
#include <cmath>

using namespace std;

int func(int n){
    if (10 > n)
        return pow(n, 2);
    

    return pow((n % 10), 2) + func(n/10);
}

int main() {
     
    int N;
    cin >> N;

    cout << func(N);

    return 0;
}