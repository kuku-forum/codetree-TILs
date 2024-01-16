#include <iostream>
#include <string>
#include <algorithm>

#define MAXN 10

using namespace std;

class Info{
    public:
        string name;
        int h, w;

        Info(string name, int h, int w){
            this->name = name;
            this->h = h;
            this->w = w;
        }
        Info(){}
} info[MAXN];

bool cmp(const Info &a, const Info &b){
    if(a.h == b.h)
        return a.w > b.w;
    return a.h < b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for (int i=0; n>i; i++)
        cin >> info[i].name >> info[i].h >> info[i].w;

    sort(info, info+n, cmp);

    for (int i=0; n>i; i++)
        cout << info[i].name << ' ' << info[i].h << ' ' << info[i].w << endl;

    return 0;
}