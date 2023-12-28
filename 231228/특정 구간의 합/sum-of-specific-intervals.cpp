#include <iostream>

using namespace std;

int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, a1, a2;
    cin >> n >> m;

    for (int i = 0; n > i; i++){
        cin >> arr[i];
    }

    for (int i = 0; m > i; i++){
        cin >> a1 >> a2;
        int sum = 0;

        for (int j = a1-1; a2 > j; j++){
            sum += arr[j];
        }

        cout << sum << endl;
    }

    return 0;
}