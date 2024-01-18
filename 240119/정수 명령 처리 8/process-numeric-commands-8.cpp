#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    list<int> ls;
    for(int i=0; n>i; i++){
        string q;
        int tmp;
        cin >> q;

        if (q == "push_front"){
            cin >> tmp;
            ls.push_front(tmp);
        }
        else if(q == "push_back"){
            cin >> tmp;
            ls.push_back(tmp);
        }
        else if(q == "pop_front"){
            cout << ls.front() << endl;
            ls.pop_front();
        }
        else if(q == "pop_back"){
            cout << ls.back() << endl;
            ls.pop_back();
        }
        else if(q == "size"){
            cout << ls.size() << endl;
        }
        else if(q == "empty"){
            cout << ls.empty() << endl;
        }
        else if(q == "front"){
            cout << ls.front() << endl;
        }
        else if(q == "back"){
            cout << ls.back() << endl;
        }


                
    }
    return 0;
}