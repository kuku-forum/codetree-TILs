#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n, m;
    int board[100][100];
    cin >> n >> m ;

    for(int i= 0; n>i; i++){
        for(int j=0; m>j; j++){
            cin >> board[i][j];
        }
    }
    // for(int i= 0; n>i; i++){
    //     for(int j=0; m>j; j++){
    //         cout << board[i][j] << ' ';
    //     }
    //     cout<< endl;
    // }

    int r = 0, c = 0;
    int drs[4] = {1, -1, 0, 0};
    int drc[4] = {0, 0, 1, -1};

    deque<pair<int, int>> dq;
    dq.push_back({r, c});

    // cout << dq.front().first << dq.front().second;

    while(dq.size() != 0){
        int nr, nc;

        r = dq.front().first;
        c = dq.front().second;
        dq.pop_front();

        if (r == n-1 && c == m-1){
            cout << 1;
            return 0;
        }
        
        for (int i = 0; 4>i; i++){
            nr = r + drs[i];
            nc = c + drc[i];

            if (n > nr && nr >= 0 && m > nc && nc >= 0 && board[nr][nc] == 1){
                dq.push_back({nr, nc});
            }
        }
    }
    cout << 0;
    
    return 0;
}