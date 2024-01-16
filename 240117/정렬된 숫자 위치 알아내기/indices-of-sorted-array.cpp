#include <iostream>
#include <algorithm>

using namespace std;

class Info{
    public:
        int x, idx;

        Info(int x, int idx){
            this->x = x;
            this->idx = idx;
        }
        Info(){}

} info[1001];

bool cmp(const Info &a, const Info &b){
    if(a.x == b.x)
        return a.idx < b.idx;
    return a.x < b.x;
}

int main() {
    int n, arr[1001];
    cin >> n;

    for (int i=0; n>i; i++){
        cin >> info[i].x;
        info[i].idx = i+1;
    }


    sort(info, info+n, cmp);

    for (int i=0; n>i; i++){
        arr[info[i].idx]= i+1;
    }
    
    for (int i=1; n>=i; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}

// 3 1 6 2 7 30 1
// 1 2 3 4 5 6 7

// 1 2 3 4 5 6 7

// 1 1 2 3 6 7 30
// 2 7 4 1 3 5 6


// 4 1 5 3 6 7 2