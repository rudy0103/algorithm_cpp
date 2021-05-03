//최대점수 구하기 (DSF 알고리즘)

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n,m;
int ch[101];
// pair<int,int> vec[101];
int max_val=-2147000000;
vector<pair<int,int>> vec;


void DFS(int l,int t, int v){

    if(t>m){ return;}

    if(v>max_val) max_val = v;
    
    if(l>n) return;
    else{

        ch[l]=1;
        DFS(l+1,t+vec[l].second,v+vec[l].first);
        ch[l]=0;
        DFS(l+1,t,v);

    }

}


int main(){

    ios_base::sync_with_stdio(false);
    // freopen("input.txt","rt",stdin);
    int i,j;
    int a,b;
    cin>>n>>m;
    vec.push_back(make_pair(0,0));

    for(i = 1; i<=n; i++){
        cin>>a>>b;
        // vec[i].first=a;
        // vec[i].second=b;
        vec.push_back(make_pair(a,b));
    }


    DFS(1,0,0);

    cout<<max_val;

    return 0;
}