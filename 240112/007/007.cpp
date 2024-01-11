#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
    string code;
    char point;
    int time;

    cin >> code >> point >> time;
    tuple<string, char, int> t = make_tuple(code, point, time);

    cout << "secret code : " << get<0>(t) << endl;
    cout << "meeting point : " << get<1>(t) << endl;
    cout << "time : " << get<2>(t) << endl;

    return 0;
}