#include <iostream>
#include <string>

using namespace std;

class Info{
    public:
        string ID;
        int level;

        Info(string ID = "codetree", int level = 10){
            this->ID = ID;
            this->level = level;
        }
};

int main() {
    
    Info info = Info();

    cout << "user " << info.ID << " lv " << info.level << endl;

    cin >> info.ID >> info.level;

    cout << "user " << info.ID << " lv " << info.level;

    return 0;
}