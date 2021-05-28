// 50.영지(territory) 선택: (small)

#include <stdio.h>
#include <time.h>

using namespace std;

int a[701][701];

int main(){
    clock_t start, end;
    double result;
    start = clock();
    freopen("input.txt", "rt", stdin);
    //----------------------------------------------------------------------------------------------------------
    int h, w;
    int i,j,k,sum, ii,jj;
    int hight, width;
    int tmp;
    int m_sum,p_sum;
    int max = -2147000000;

    scanf("%d %d",&h,&w);

    for(i = 0 ; i< h ; i++){
        for(j = 0 ; j <w ; j++){
            scanf("%d",&a[i][j]);
        }
    }

    scanf("%d %d",&hight,&width);

    for(i = 0 ; i<= h-hight ; i++){
        for(j = 0 ; j <=w-width ; j++){
            if(j==0)
            {    
                sum=0;
                for(ii=0;ii<hight;ii++){
                    for(jj=0;jj<width;jj++){
                        sum+=a[i+ii][j+jj];
                    }
                }
                tmp =sum;
                
            }else{
                
         
            m_sum=0;
            p_sum=0;
            for(jj=0;jj<hight;jj++){
                m_sum+=a[i+jj][j-1];
                p_sum+=a[i+jj][j+width-1];
            }
            sum=sum-m_sum+p_sum;
            
            }

            if(sum> max){
                max=sum;
            }

        }



    }

    printf("%d",max);




    // //------------------------------------------------------------------------------------------------------------
    end = clock();
    result = (double)(end - start);
    printf("\ntime: %f",result);


    return 0;
}