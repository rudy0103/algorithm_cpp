//34. 버블정렬

#include <stdio.h>
#include <algorithm>
#include <vector>
#include <time.h>

using namespace std;

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int i, j, n, tmp;
    int a[100];
    scanf("%d",&n);

    for(i = 0 ; i < n ; i ++){
        scanf("%d",&a[i]);
    }

	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}

    for(i = 0 ;i < n ; i++){
        printf("%d ",a[i]);
    }

    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}