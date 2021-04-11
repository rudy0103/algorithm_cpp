// 41.연속된 자연수의 합

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
    int i,j,k,sum,cnt;

    scanf("%d",&n);
    cnt = 0;

	for(i = 2 ; i < n/2+1; i++){
		sum = (1+i)*i/2;
		if((n - sum)%i==0 && n-sum >=0){
			cnt++;

			for(j = 1 ; j <=i;j++){
				if(j!=i) printf("%d + ",(n-sum)/i+j);
				else printf("%d = %d\n",(n-sum)/i+j,n);
			}

		}
	}


    printf("%d",cnt);



    //------------------------------------------------------------------------------------------------------------
    // end = clock();
    // result = (double)(end - start);
    // printf("\ntime: %f",result);


    return 0;
}