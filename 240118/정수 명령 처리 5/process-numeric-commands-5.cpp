#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> arr;

    int n;
    cin >> n;

    for(int i= 0; n>i; i++){
        string str;
        int num;
        cin >> str;

        if(str == "size"){
            cout << arr.size() << endl;
        }
        else if(str == "pop_back"){
            arr.pop_back();
        }
        else if(str == "push_back"){
            cin >> num;
            arr.push_back(num);
        }
        else if(str == "get"){
            cin >> num;
            cout << arr[num-1] << endl;
        }


    }

    return 0;
}