#include <iostream>

using namespace std;

int main() {
    int n, arr[100], minIdx;
    cin >> n;

    for (int i=0; n>i; i++)
        cin >> arr[i];


    for (int i=0; n-1>i; i++){
        minIdx = i;

        for (int j=i+1; n>j; j++){

            if(arr[minIdx] > arr[j]){
                minIdx = j;
                
            }
            
        }
        int tmp;
        tmp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = tmp;
    }

    for (int i=0; n>i; i++)
        cout << arr[i] << ' ';
    return 0;
}