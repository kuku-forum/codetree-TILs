#include <iostream>
#include <algorithm>
#define MAXN 1001
using namespace std;

class Info{
    public:
        int x, y, idx;

        Info(int x, int y){
            this->x = x;
            this->y = y;
            this->idx = idx;
        }
        Info(){}

} info[MAXN];

bool cmp(const Info &a, const Info &b){
    int distA = abs(a.x) + abs(a.y);
    int distB = abs(b.x) + abs(b.y);
    int minA = min(a.x, a.y);
    int minB = min(b.x, b.y);

    if (distA == distB)
        return minA < minB;
    return distA < distB;
}

int main() {
    int n;
    cin >> n;

    for(int i=0; n>i; i++){
        cin >> info[i].x >> info[i].y;
        info[i].idx = i+1;
    }
    
    sort(info, info+n, cmp);

    for(int i=0; n>i; i++){
        cout << info[i].idx << endl;
    }

    
    return 0;
}