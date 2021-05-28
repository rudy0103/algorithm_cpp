// 43. 뮤직비디오(이분검색 응용)
#include <stdio.h>
#include <time.h>

using namespace std;

bool Count_dvd(int dvd_size,int a[],int n, int m){
    int i;
    int sum =0 ;
    int cnt=1;

    for(i = 0; i< n; i ++){
        if(sum+a[i] <= dvd_size){
            sum+=a[i];
        }else{
            sum=a[i];
            cnt++;
        }

    }

    if(cnt <= m){
        return true;
    }
    else return false;

}

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int n, m, i, j;
    int max;
    int a[1001];
    int sum = 0 ,avr;
    int left, right,mid;
    int dvd_size;

    scanf("%d %d",&n,&m);
    max=0;

    for(i = 0 ; i < n ;i++){
        scanf("%d",&a[i]);
        if(a[i]>=max){
            max=a[i];
        }
        sum+=a[i];
    }

    avr = sum / m;
    j=0;
    left = 0;
    right = sum;

    while (left<=right)
    {
        mid= (left+right)/2;
        if(Count_dvd(mid, a, n,m)){
            dvd_size = mid;
            right = mid -1;
        }else{
            left = mid +1;
        }

    }

    if(dvd_size<max){
        printf("%d",max);
    }else printf("%d",dvd_size);
    



    // printf("%d",dvd_size);




    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}