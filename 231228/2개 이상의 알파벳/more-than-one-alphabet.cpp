#include <iostream>
#include <string>

using namespace std;

bool func(string &str){
    int len = str.length();
    char alp = str[0];

    for (int i = 1; len > i; i++){
        if (alp != str[i])
            return true;
    }
    return false;
}

int main() {
    string str;
    cin >> str;

    if (func(str))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}