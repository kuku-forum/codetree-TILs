#include <iostream>
#include <string>

using namespace std;

class Info{
    public:
        string name, addr, city;
        
        Info(string name, string addr, string city){
            this->name = name;
            this->addr = addr;
            this->city = city;
        }
        Info() {}
} info[10];

int main() {
    int n, minIdx=0;
    cin >> n;

    for(int i = 0; n > i; i++)
        cin >> info[i].name >> info[i].addr >> info[i].city;
    
    for(int i = 1; n > i; i++){
        if(info[minIdx].name < info[i].name)
            minIdx = i;
    }

    cout << "name " << info[minIdx].name << endl;
    cout << "addr " << info[minIdx].addr << endl;
    cout << "city " << info[minIdx].city << endl;


    return 0;
}