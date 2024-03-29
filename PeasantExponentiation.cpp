//Russian peasant algorithm as well complex number multiplication
//Bin exponentiation 
/*
double exponentiate1(double x, int n)
 {
 double P;
 while ((n & 1) == 0) {
 x = x * x;//best algorithm of exponentiation
 n >>= 1;
 }
 P = x;
 n >>= 1;
 while (n > 0) {
 x = x * x;
 if ((n & 1) != 0)
 P = P * x;
 n >>= 1;
 }
 return P;
 }
*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll mmod(ll n)
{
    return (n-(n/mod)*mod);
}

pair<ll,ll> mul(pair<ll,ll> p1,pair<ll,ll> p2)
{
     ll ans=mmod(p1.first*p2.first- p1.second*p2.second);
     ll ansi=mmod(p1.second*p2.first+p1.first*p2.second);
     return make_pair(ans,ansi);
}

pair<ll,ll> exponentiel(pair<ll,ll> ,ll kk)
{
    pair<ll,ll> ans=make_pair(1,0);

    while(kk > 0)
    {
        if(kk & 1)
        {
            ans=mul(ans,inp);
        }
        inp=mul(inp,inp);
        kk/=2;

    }
    return ans;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k>>mod;
        pair<ll,ll> p;
        p=make_pair(a,b);
        pair<ll,ll> answer=binexp(p,k);
        cout<<(answer.first+mod)%mod<<" "<<(answer.second+mod)%mod<<endl;
        
    }
    return 0;
}