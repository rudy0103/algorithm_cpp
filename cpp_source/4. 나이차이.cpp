#include <iostream>

using namespace std;

int main(){

    freopen("input.txt", "rt", stdin);
    
    int n ,low,high, tmp;
    cin >> n;

    low  = 2147000000;
    high = -2147000000;

    for (int i = 1; i <= n ; i ++){
        cin >> tmp;
        if (tmp < low){
            low = tmp;
        }

        if (tmp > high){
            high = tmp;
        }
    }
    cout << high - low ;
    





    return 0;
}