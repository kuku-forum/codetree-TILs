#include <iostream>
#include <algorithm>

using namespace std;

int arr[10];
int N, maxN=0;

int func(){

    bool flag = true;
    int minNum = 11;


    for (int i = 0; N > i; i++){
        if(arr[i] > 1 && minNum > arr[i]){
            flag = false;
            minNum = arr[i];
        }
    }

    if(flag) return 1;

    for (int i = 0; N > i; i++){
        if(arr[i]%minNum == 0)
            arr[i] = arr[i]/minNum;
    }

    return minNum * func();

}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> N;

    for(int i=0; N>i; i++){
        cin >> arr[i];
    }

    cout << func();

    return 0;
}