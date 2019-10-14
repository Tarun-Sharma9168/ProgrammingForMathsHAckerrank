#include<iostream>
using namespace std;
long int int gcd(long long int a,long long int b)
{
    if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int t;
    cin>>t;
    long long int a,b,c,d;
    while(t--)
    {
      cin>>a>>b>>c>>d;
      long long int result=abs(gcd((d-b),(c-a))-1);
      cout<<result<<"\n";
    }
    return 0;
}