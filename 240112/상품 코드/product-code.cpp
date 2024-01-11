#include <iostream>
#include <string>

using namespace std;

class Info{
    public:
        string product;
        int code;

        Info(string product="codetree", int code=50){
            this->product = product;
            this->code = code;
        }
} info;

int main() {
    
    cout << "product " << info.code << " is " << info.product << endl;
    cin >> info.product >> info.code;
    cout << "product " << info.code << " is " << info.product << endl;
    return 0;
}