#include <iostream>

using namespace std;

int N, arr[100] = {0}, maxNum;

void func(int n){
    if (n == N)
        return;
    
    if (arr[n] > maxNum)
        maxNum = arr[n];

    func(n + 1);
}


int main() {
    
    cin >> N;
    for(int i = 0; N > i; i++){
        cin >> arr[i];
    }
    maxNum = arr[0];
    func(1);
    cout << maxNum;

    return 0;
}