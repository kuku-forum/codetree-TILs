#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Info{
    public:
        int kor, eng, mat;
        string name;

        Info(string name, int kor, int eng, int mat){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mat = mat;
        }
        Info(){}
} info[10];

bool cmp(const Info &a, const Info &b){
    if(a.kor == b.kor){
        if(a.eng == b.eng)
            return a.mat > b.mat;        
        return a.eng > b.eng;
    }
        return a.kor > b.kor;
    

}

int main() {
    
    int n;
    cin >> n;

    for(int i=0; n>i; i++)
        cin >> info[i].name >> info[i].kor >> info[i].eng >> info[i].mat;

    sort(info, info+n, cmp);

    for(int i=0; n>i; i++)
        cout << info[i].name << ' ' <<  info[i].kor << ' ' <<  info[i].eng << ' ' <<  info[i].mat << endl;

    return 0;
}