#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    queue<int>q ;

    for(int i = 1; N >= i; i++)
        q.push(i);

    while(q.size() != 0){
        for (int i = 0; K-1 > i; i++){
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ' ';
        q.pop();
    }

    return 0;
}