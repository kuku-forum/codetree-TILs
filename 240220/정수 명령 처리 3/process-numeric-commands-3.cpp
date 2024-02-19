#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    deque<int> dq;
    
    for (int i = 0; N> i; i++){
        string str;
        int num;

        cin >> str;

        if(str == "push_front"){
            cin >> num;
            dq.push_front(num);
        }
        else if(str == "push_back"){
            cin >> num;
            dq.push_back(num);
        }
        else if(str == "pop_front"){
            cout << dq.front() << endl;
            dq.pop_front();
        }
        else if(str == "pop_back"){
            cout << dq.back() << endl;
            dq.pop_back();
        }
        else if(str == "size"){
            cout << dq.size() << endl;
        }
        else if(str == "empty"){
            if (dq.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else if(str == "front"){
            cout << dq.front() << endl;
        }
        else if(str == "back"){
            cout << dq.back() << endl;
        }
    }
    return 0;
}