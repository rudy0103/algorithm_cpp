//[추가문제] 가장 높은 탑 쌓기

#include<iostream>
#include<time.h>
#include<vector>
#include<algorithm>

struct Stone
{
    int num;
    int area;
    int height;
    int weight;
    bool operator<(const Stone &b)const{
        return area>b.area;
    }
    
};



using namespace std;

int dy[1001];

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    ios_base::sync_with_stdio(false);

    int i,j, n;
    cin>>n;
    int a,h,w;
    int max;
    int res=0;
    
    vector<Stone> vec(n+1);

    for(i=1;i<=n;i++){
        cin>>a>>h>>w;
        vec[i].num=i;
        vec[i].area=a;
        vec[i].height=h;
        vec[i].weight=w;
    }
    sort(vec.begin()+1,vec.end());

    dy[1]=vec[1].height;
    
    // for(i=1;i<=n;i++){
    //     cout<<vec[i].num<<" ";
    //     cout<<vec[i].area<<" ";
    //     cout<<vec[i].height<<" ";
    //     cout<<vec[i].weight<<" ";
    //     cout<<endl;
    // }


    for(i=2; i<=n;i++){
        h=0;
        for(j=i;j>=1;j--){
            if(vec[i].weight<vec[j].weight){
                if(dy[j]>h){
                    h=dy[j];
                }
            }

        }
        dy[i]=h+vec[i].height;
        if(dy[i]>res){
            res=dy[i];
        }
    }

    // for(i=1; i<=n; i++) cout<<dy[i]<<" ";
    cout<<res;
    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}