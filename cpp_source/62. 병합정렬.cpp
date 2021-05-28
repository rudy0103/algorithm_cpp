// 62. 병합정렬

#include <stdio.h>
#include <time.h>
#include <vector>

using namespace std;

int a[101];
int b[101];

void merge_sort(int a[], int lt, int rt)
{
    int mid;
    int p1,p2,p3;
    mid = (lt+rt)/2;
    if(lt<rt){
        p1=lt;
        p2=mid+1;
        p3=lt;
        merge_sort(a,lt,mid);
        merge_sort(a,mid+1,rt);

        while (p1<=mid && p2<=rt)
        {
            if(a[p1]<=a[p2]){
                b[p3++]=a[p1++];

            }
            else{
                b[p3++]=a[p2++];
            }
            
        }

        while (p1<=mid) 
        {
            b[p3++]=a[p1++];
        }
        while(p2<=rt){
            b[p3++]=a[p2++];
        }

        for(int i= lt; i<=rt; i++){
            a[i]=b[i];
        }
        
        
    }

}


int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //-----------------------------------------------------------------------------------------------------------
    int n, i;
    int left, mid, right;


    scanf("%d",&n);

    for(i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    left = 0;
    right = n-1;
    merge_sort(a, left, right);

    for(i =0 ; i< n ;i++){
        printf("%d ",a[i]);
    }






    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}