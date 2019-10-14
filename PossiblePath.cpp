#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
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

    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>c>>d;
        
        if(gcd(a,b)==gcd(c,d))
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            {
                cout<<"NO"<<"\n";
            }
        }

    }
    return 0;
        
}