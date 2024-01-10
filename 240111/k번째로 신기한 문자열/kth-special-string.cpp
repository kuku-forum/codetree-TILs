#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    string str, word[100];

    cin >> n >> k >> str;

    int len = str.length();
    int nn=0;

    for (int i=0 ; n>i; i++){
        string tmp;
        bool flag = true;
        cin >> tmp;

        for (int j=0; len>j; j++){
            if( str[j] != tmp[j]){
                flag = false;
                break;
            }
        }

        if (flag){
            word[nn] = tmp;
            nn++;
        }
    }

    
    sort(word, word+nn);
   cout << word[k-1];

    return 0;
}