#include <iostream>

using namespace std;

int answer;

void func(int n){
    
    if (n == 1){
        return;
    }

    answer++;
    
    if (n%2 == 0){
        func(n/2);
    }
    else{
        func(n/3);
    }

}

int main() {
    int N;
    cin >> N;
    func(N);
    cout << answer;

    return 0;
}