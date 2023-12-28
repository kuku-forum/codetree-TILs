#include <iostream>
#include <string>

using namespace std;

bool check(string &tmp){


    int len = tmp.length() - 1;
    
    for (int i = 0; i <= len; i++){
        if( tmp[i] != tmp[len -i]){
            return false;
        }
    }
    return true;


}

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;

    if (check(str))
        cout << "Yes";
    else
        cout << "No"; 

    return 0;
}