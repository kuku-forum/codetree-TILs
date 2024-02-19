#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string str;
    cin >> str;

    stack<char> s;

    for (int i = 0; str.length() > i; i ++){
        if(s.empty()){
            s.push(str[i]);
        }
        else{
            if (s.top() == '(' ){
                if(str[i] == ')') 
                    s.pop();
                else
                    s.push(str[i]);
            }
            else if(s.top() == ')' ){
                if(str[i] == '(') 
                    s.pop();
                else
                    s.push(str[i]);
            }
        }
    }

    if(s.empty())
        cout << "Yes";
    else   
        cout << "No";
    return 0;
}