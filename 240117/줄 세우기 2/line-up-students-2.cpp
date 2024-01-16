#include <iostream>
#include <algorithm>

using namespace std;

class Info{
    public:
        int h, w, idx;

        Info(int h, int w, int idx){
            this->h = h;
            this->w = w;
            this->idx = idx;
        }
        Info(){}
} info[1001];

bool cmp(const Info &a, const Info &b){
    if(a.h == b.h)
        return a.w > b.w;
    return a.h < b.h;
}

int main() {
    int n;
    cin >> n;

    for(int i=0; n>i; i++){
        cin >> info[i].h >> info[i].w;
        info[i].idx = i+1;
    }

    sort(info, info+n, cmp);

    for(int i=0; n>i; i++)
        cout << info[i].h << ' ' << info[i].w << ' ' << info[i].idx << endl;
    
    return 0;
}