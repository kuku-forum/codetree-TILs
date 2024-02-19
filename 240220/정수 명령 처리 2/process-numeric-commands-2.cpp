#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;

    for (int i= 0 ; n>i; i++){
        string str;
        int num;
        cin >> str;

        if(str == "push"){
            cin >> num;
            q.push(num);
        }
        else if(str == "front"){
            cout << q.front() << endl;
        }
        else if(str == "size"){
            cout << q.size() << endl;
        }
        else if(str == "empty"){
            if(q.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(str == "pop"){
            cout << q.front() << endl;
            q.pop();
        }
    }
    return 0;
}