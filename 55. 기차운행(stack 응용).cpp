// 55. 기차운행(stack 응용)

#include <stdio.h>
#include <time.h>
#include <stack>
#include <vector>
#include <string>
#include <iostream>


using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n,i,train,top;
    int sequence = 1;
    vector<string> a;
    vector<string>::iterator it;
    stack<int> s;

    scanf("%d",&n);
    for(i = 0 ; i< n; i++){
        scanf("%d",&train);

   
        s.push(train);
        a.push_back("P");

        while(s.top() == sequence){
            s.pop();
            a.push_back("O");
            sequence++;
            if(s.empty()) break;
        }

    }
    if(s.empty()){
        for(it=a.begin(); it != a.end();++it){
            cout<<*it;
            
        }
    }
    else{
        printf("impossible");
    }


    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}