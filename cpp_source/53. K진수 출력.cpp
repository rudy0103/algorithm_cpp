// 53. K진수 출력

#include <stdio.h>
#include <time.h>
#include <stack>


using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n, k;
    int mod,item,tmp;
    char str[20]="0123456789ABCDEF";
    scanf("%d %d",&n,&k);

    stack<int> st;


    item = n;
    while(item>1){
        n=item;
        item = item / k;
        if(item >= 1){
            st.push(n-k*item);
            // printf("%d ",n-k*item);//

            if(item == 1){
                st.push(item);
                // printf("%d ",item);
                break;
            }
        }
        else{
            st.push(n);
        }

    }

 

    while(!st.empty()){

        printf("%c",str[st.top()]);
        st.pop();
    }



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}