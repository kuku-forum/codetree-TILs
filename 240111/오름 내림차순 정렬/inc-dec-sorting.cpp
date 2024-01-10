#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n, arr[100];

    cin >> n;

    for(int i= 0; n > i; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);
    
    for(int i= 0; n > i; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;
    sort(arr, arr+n, greater<int>());

    for(int i= 0; n > i; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}