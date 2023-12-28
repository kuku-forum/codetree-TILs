#include <iostream>
#include <string>

using namespace std;

string str, subStr;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> str >> subStr;
    if(str.find(subStr) == std::string::npos)
        cout << -1;
    else
        cout << str.find(subStr);
    return 0;

}