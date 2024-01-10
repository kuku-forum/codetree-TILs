#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, arr[2000], sumSet[1000];

    cin >> N;
    for(int i=0; 2*N>i; i++) cin >> arr[i];

    sort(arr, arr+2*N);

    for (int i= 0; N>i; i++){
        sumSet[i] = arr[i] + arr[2*N-i-1];
    }

    sort(sumSet, sumSet+N);
    cout << sumSet[N-1];
    return 0;
}