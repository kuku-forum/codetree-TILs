#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info{
    public:
        string name;
        int h;
        float w;

        Info(string name, int h, float w){
            this->name = name;
            this->h = h;
            this->w = w;
        }
        Info(){}
} info[5];

bool cmpN(const Info &a, const Info &b){
    return a.name < b.name;
}

bool cmpH(const Info &a, const Info &b){
    return a.h > b.h;
}

int main() {
    
    for(int i=0; 5>i; i++){
        cin >> info[i].name >> info[i].h >> info[i].w;
    }

    cout << fixed;
    cout.precision(1);

    sort(info, info+5, cmpN);
    cout << "name" << endl;

    for(int i=0; 5>i; i++)
        cout << info[i].name << ' ' << info[i].h << ' ' << info[i].w << ' ' << endl;
    
    sort(info, info+5, cmpH);
    cout << endl << "height" << endl;

    for(int i=0; 5>i; i++)
        cout << info[i].name << ' ' << info[i].h << ' ' << info[i].w << ' ' << endl;

    return 0;
}