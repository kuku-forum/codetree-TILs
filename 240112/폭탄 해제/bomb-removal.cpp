#include <iostream>
#include <string>

using namespace std;

class Info{
    public:
        string code;
        char color;
        int sec;

        Info(string, char, int){
            this-> code = code;
            this-> color = color;
            this-> sec = sec;
        }

        Info(){}
} info, inko;


int main() {

    cin >> info.code >> info.color >> info.sec;

    cout << "code : " << info.code << endl;
    cout << "color : " << info.color << endl;
    cout << "second : " << info.sec << endl;
    
    cout << "code : " << inko.code << endl;
    cout << "color : " << inko.color << endl;
    cout << "second : " << inko.sec << endl;


    return 0;
}