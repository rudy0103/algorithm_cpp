//31. 탄화수소 질량


#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    char a[10];
    int x, y ;
    int i,k,res;

    scanf("%s",&a);
    x = 0;
    y = 0;
    i = 0;

    if(a[i]== 'C'){
        i++;

        if(a[i] == 'H'){
            x=1;
        }


        while(a[i]!='H'){
            x= x*10 + (a[i]-48);
            i++;
        }

        if( a[i+1] == '\0'){
            y = 1;
        }
        i++;

        while(a[i] != '\0'){
            y = y*10 + (a[i]-48);
            i++;
        }

    }

    


    






    res = 12*x + 1*y;
    printf("%d",res);

    //------------------------------------------------------------------------------------------------------------
    // printf("\ntime: %f",result);


    return 0;
}