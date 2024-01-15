#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info{
    public:
        int a, b, c;
        string name;

        Info(string name, int a, int b, int c){
            this->name = name;
            this->a = a;
            this->b = b;
            this->c = c;
        }
        Info(){}
} info[10];

bool cmp(const Info &a, const Info &b){
    return a.a + a.b + a.c < b.a + b.b + b.c;
}

int main() {
    int n;
    cin >> n;

    for (int i=0 ; n > i; i++)
        cin >> info[i].name >> info[i].a >> info[i].b >> info[i].c;

    sort(info, info+n, cmp);

    for (int i=0 ; n > i; i++)
        cout << info[i].name << ' ' << info[i].a << ' ' <<  info[i].b << ' ' <<  info[i].c << endl;

    return 0;
}