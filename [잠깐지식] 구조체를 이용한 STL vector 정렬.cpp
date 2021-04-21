// [잠깐지식] 구조체를 이용한 STL vector 정렬
#include<stdio.h>
#include<iostream>
#include<time.h>
#include<vector>
#include<algorithm>

using namespace std;

struct Loc{
    int x, y, z;
    Loc(int a, int b, int c){
        x=a;
        y=b;
        z=c;
    }
    bool operator <(const Loc &b)const{
        if(x!=b.x) return x<b.x;
        if(y!=b.y) return y<b.y;
        if(z!=b.z) return z<b.z;
    }
};

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    vector<Loc> XY;
    XY.push_back(Loc(2, 3, 5));
    XY.push_back(Loc(3, 6, 7));
    XY.push_back(Loc(2, 3, 1));
    XY.push_back(Loc(5, 2, 3));
    XY.push_back(Loc(3, 1, 6));
    sort(XY.begin(),XY.end());
    for(auto pos : XY) cout<<pos.x<<" "<<pos.y<<" "<<pos.z<<endl;



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}