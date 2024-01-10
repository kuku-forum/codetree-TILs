#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N, K, arr[1000];
    cin >> N >> K;

    for (int i=0; N>i; i++)
        cin >> arr[i];

    sort(arr, arr+N);
    cout << arr[K-1];

    return 0;
}