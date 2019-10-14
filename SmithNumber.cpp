#include<iostream>
#include<math.h>
#define ll long long
#define scan1(a) scanf("%lld",&a)
#define scan2(a,b) scanf("%lld%lld",&a,&b)
#define print(a) printf("%lld\n",a)
#define print2(a,b) printf("%lld %lld",a,b)
using namespace std;

ll digitsum(ll num){
    ll val = 0;
    while(num!=0){
        val = val + num%10;
        num = num/10;
    }
    return val;
}

ll factors(ll num){
    ll val = 0;
    for(ll i =2;i*i<=(num);i++){
        while(num%i==0){
            val = val + digitsum(i);
            num = num/i;
        }
    }
    if(num!=1)
        val = val + digitsum(num);
    return val;
}


bool smith_num(ll num){
    return factors(num)==digitsum(num);
}

int main(){
    ll num;scan1(num);
    if(smith_num(num))
        cout<<1<<endl;
    else
        cout<<0<<endl;
}