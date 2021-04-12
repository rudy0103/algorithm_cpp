// 51 Ugly Numbers

#include <stdio.h>
#include <time.h>

using namespace std;



int main(){
    clock_t start, end;
    double result;
    start = clock();
    // freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n;
    int i ,j;
    int p2 = 1,p3 = 1 ,p5 = 1;
    int n1,n2,n3;
    int a[1501] = {0};
    scanf("%d",&n);
    a[1] = 1;
    i=2;
    while(1){
        n1 = a[p2]*2;
        n2 = a[p3]*3;
        n3 = a[p5]*5;

        if(n1<n2 && n1 <n3){
            p2++;
            a[i]=n1;
            i++;
        }else if(n2 <n1 && n2 <n3){
            p3++;
            a[i]=n2;
            i++;
        }
        else if(n3 < n1 && n3 < n2){
            p5++;
            a[i]=n3;
            i++;
        }else{
        
            if(n1 == n2 && n1 == n3 ){
                p2++;
                p3++;
                p5++;
                a[i]=n1;
                i++;
            }else if(n1 == n3){
                p2++;
                p5++;
                a[i]=n1;
                i++;

            }else if( n2 == n3){
                p3++;
                p5++;
                a[i]=n2;
                i++;
            }else if(n1== n2 ){
                p2++;
                p3++;
                a[i]=n2;
                i++;
            }

        }

        if(i>n) break;

    }

    printf("%d",a[n]);









    // //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}