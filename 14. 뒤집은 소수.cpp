//14. 뒤집은 소수

#include <iostream>

using namespace std;

int reverse(int x){
    int tmp,n,res=0;

    while(x >=1)
    {
        tmp = x % 10;
        x=x/10;

        res= res*10 +tmp;
        


    }

    // printf("%d\n",res);

    return res;
}
bool isPrime(int x){

    if (x == 1){
        return false;
    }
    else if (x == 2 ){
        return true;
    }

    if (x % 2 == 0){
        return false;
    }else{
        for(int i = 3; i < x/2 + 1 ; i=i+2){

            if( x % i == 0){
                return false;
            }

        }
    }


    return true;

}


int main(){
    
    int n,i,num;
    bool is_prime;

    // freopen("input.txt", "rt", stdin);

    scanf("%d",&n);


    for(int i = 1; i <= n ; i++)
    {
        scanf("%d",&num);

        num = reverse(num);

        if(isPrime(num)){
            printf("%d ",num);
        }

    }






    return 0;
}