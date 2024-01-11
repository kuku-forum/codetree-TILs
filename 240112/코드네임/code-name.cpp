#include <iostream>

using namespace std;

class Info{

    public:
        char name;
        int num;

        Info(char name = ' ', int num=0){
            this->name = name;
            this->num = num;
        }

} info[5];

int main() {
    // 여기에 코드를 작성해주세요.

    

    for (int i = 0; 5>i; i++){
        cin >> info[i].name >> info[i].num;
    }

    int min_num = 101;
    int idx = 0;

    for (int i = 0; 5>i; i++){
        if(min_num > info[i].num){
            min_num = info[i].num;
            idx = i;
        }
    }

    cout << info[idx].name << ' ' << info[idx].num;

    return 0;
}