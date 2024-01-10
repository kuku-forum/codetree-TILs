#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int N, arr[10] ={};
    cin >> N;
    int tmp;

    for(int i = 0; N> i; i++){
        cin >> arr[i];

        if(i%2 == 0){
            sort(arr, arr+i+1);
            cout << arr[i/2] << ' ';
        }

    }

    return 0;
}