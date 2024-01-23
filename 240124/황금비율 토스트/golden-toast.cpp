#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    list<char> l;
    list<char>::iterator it;

    for (int i= 0; n >i; i++){
        char c;
        cin >> c;

        l.push_back(c);
    }

    it = l.end();
    
    for (int i=0; m> i; i++){
        char a, b;
        cin >> a;

        if(a=='L'){
            it--;
        }
        else if(a=='R'){
            it++;
        }
        else if(a=='D'){
            l.erase(it);
        }
        else if(a=='P'){
            cin >> b;
            l.insert(it, b);
        }
        
    }

    for ( it=l.begin(); it != l.end(); it++){
        cout << *it;
    }
    return 0;
}