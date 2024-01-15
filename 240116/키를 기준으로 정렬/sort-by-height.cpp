#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info{
    public:
        int h, w;
        string name;
    
        Info(int h, int w, string name){
            this->h = h;
            this->w = w;
            this->name = name;
        }

        Info() {}

} info[100];


bool cmp(const Info &a, const Info &b){
    return a.h < b.h;
}

int main() {
    
    int n;
    cin >> n;

    for (int i=0; n>i; i++){
        cin >> info[i].name >> info[i].h >> info[i].w;
    }

    sort(info, info+n, cmp);

    for (int i = 0; n>i; i++)
        cout << info[i].name << ' ' << info[i].h << ' ' << info[i].w << endl;

    return 0;
}