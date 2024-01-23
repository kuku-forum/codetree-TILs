#include <iostream>

using namespace std;

int main() {
    int n, arr[100];
    cin >> n;

    for (int i= 0; n > i; i++)
        cin >> arr[i];

    for (int i= 0; n-1 > i; i++){
        bool flag = true;

        for (int j = 0; n-1-i > j; j++){
            int tmp;
            if (arr[j] > arr[j+1]){
                flag = false;
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }

        if(flag)
            break;
    }

    for (int i= 0; n > i; i++)
        cout << arr[i] << ' ';
    return 0;
}