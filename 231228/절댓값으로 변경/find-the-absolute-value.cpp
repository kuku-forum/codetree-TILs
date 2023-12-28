#include <iostream>
#include <algorithm>

using namespace std;

void func(int n, int *a){
    for (int i =0 ; n>i; i++){
        *(a+i) = abs(*(a+i));
    }
}


int main() {
    // 여기에 코드를 작성해주세요.
    int arr[50], n;

    cin >> n;

    for (int i= 0 ; n > i; i++){
        cin >> arr[i]; 
    }

    func(n, arr);

    for (int i= 0 ; n > i; i++){
        cout <<  arr[i] << ' '; 
    }

    return 0;
}