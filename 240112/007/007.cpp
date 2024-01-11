#include <iostream>
#include <tuple>
#include <string>

using namespace std;

class Info{
    public:
        string code;
        char point;
        int time;

        Info(string code, char point, int time){
            this->code = code;
            this->point = point;
            this->time = time;
        }
};


int main() {
    
    string s_code;
    char m_point;
    int time;

    Info info = Info(s_code, m_point, time);
    cin >> info.code >> info.point >> info.time;

    cout << "secret code : " << info.code << endl;
    cout << "meeting point : " << info.point << endl;
    cout << "time : " <<  info.time << endl;

    return 0;
}