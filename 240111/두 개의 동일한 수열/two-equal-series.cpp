#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, arr1[100], arr2[100];

    cin >> n;

    for(int i=0; n>i; i++)
        cin >> arr1[i];
    
    for(int i=0; n>i; i++)
        cin >> arr2[i];

    sort(arr1, arr1+n);
    sort(arr2, arr2+n);

    bool flag = false;

    for(int i=0; n>i; i++){
        if(arr1[i] != arr2[i]){
            flag = true;
            cout << "No";
            break;
        }
    }

    if (!flag)
        cout << "Yes";
    return 0;
}