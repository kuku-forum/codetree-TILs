#include <iostream>
#include <string>

#define MAXN 100

using namespace std;

class Info{
    public:
        string dow, date, weather;

        Info(string dow, string date, string weather){
            this->dow = dow;
            this->date = date;
            this->weather = weather;
        }
        Info(){}
} info[MAXN];

int main() {

    int n, idx=0;
    cin >> n;

    for (int i=0 ; n>i; i++){
        string dow, date, weather;
        cin >> dow >> date >> weather;
        
        if (weather == "Rain"){
            idx = i;
        }

        info[i].dow = dow;
        info[i].date = date;
        info[i].weather = weather;
    }

    for (int i=1 ; n>i; i++){
        if(idx == i) continue;

        if(info[i].weather == "Rain" && info[idx].dow > info[i].dow)
            idx = i;
    }

    cout << info[idx].dow << ' ' << info[idx].date << ' ' << info[idx].weather;

    return 0;
}