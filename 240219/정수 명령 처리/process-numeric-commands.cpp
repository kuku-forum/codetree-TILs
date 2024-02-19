#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;

    for (int i = 0; n > i; i++){
        string cmd;
        int num;

        cin >> cmd;

        if(cmd == "push"){
            cin >> num;
            s.push(num);
        }
        else if (cmd == "pop"){
            cout << s.top() << endl;
            s.pop();

        }
        else if (cmd == "size"){
            cout << s.size() << endl;
        }
        else if (cmd == "empty"){
            if (s.empty())
                cout << 1 << endl;
            else{

                cout << 0 << endl;
            }
        }
        else if (cmd == "top"){
            cout << s.top() << endl;            
        }
    }
    return 0;
}