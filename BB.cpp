
#include <stdio.h>
#include <time.h>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int ch[1000001], d[3] = {-1, 1, 5};

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int s, e, x, pos, i,flag=1;
    queue<int> Q;
    scanf("%d %d",&s,&e);

    ch[s] = 1;
    Q.push(s);
    while (!Q.empty() && flag==1)
    {
        x = Q.front();
        Q.pop();

        for(i = 0; i<3; i++){
            pos = x+d[i];
            if(pos<=0 || pos>1000000) continue;
            if(pos == e){
                printf("%d\n",ch[x]);
                flag=0;
            }
        
            if(ch[pos]==0){
                ch[pos]=ch[x]+1;
                Q.push(pos);
                }
        }
    }
    


    //------------------------------------------------------------------------------------------------------------
    end = clock();
    result = (double)(end - start)/1000;
    printf("\ntime: %f",result);


    return 0;
}