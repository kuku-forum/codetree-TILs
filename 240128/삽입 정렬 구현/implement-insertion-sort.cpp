#include <iostream>

using namespace std;

int main() {
    int n, arr[100];
    cin >> n;

    for (int i = 0; n > i; i++)
        cin >> arr[i];

    for (int i = 1; n > i; i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key;
    }

    for (int i = 0; n > i; i++)
        cout << arr[i] << ' ' ;
    return 0;
}