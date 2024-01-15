#include <iostream>
#include <algorithm>

using namespace std;

class Info{
    public:
        int w, h, i;

        Info(int w, int h, int i){
            this->w = w;
            this->h = h;
            this->i = i;
        }
        Info(){}
} info[1001];

bool cmp(const Info &a, const Info &b){
    if(a.h != b.h)
        return a.h > b.h;
    
    if(a.w != b.w)
        return a.w > b.w;

    return a.i < b.i;
}

int main() {
    int n;
    cin >> n;

    for (int i=0; n>i; i++){
        cin >> info[i].h >> info[i].w;
        info[i].i = i+1;
    }

    sort(info, info+n, cmp);

    for (int i=0; n>i; i++)
        cout << info[i].h << ' ' << info[i].w << ' ' << info[i].i << endl;

    return 0;
}