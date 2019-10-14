#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<iomanip>
#include<map>
#define ull unsigned long long int
#define fl(i,n) for(i=0;i<n;i++)
#define ls(i,s) for(i=0;s[i]!='\0';i++)
#define gi(x) fastscan(x)
#define pi(x) printf("%d",x)
#define checkline(x) while(x!='\0' && x!='\n')
#define pn printf('\n')
#define ps printf(' ')
#define lli long long int
using namespace std;
int main()
{
    ull t,ans;
    lli xy,D,p,d;
    double x;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>d>>p;
        if(d<0)
        {
            cout<<0<<'\n';
        }
        else if(p==0 && d==0)
            cout<<1<<'\n';
        else if(d==0)
        {
            xy = (lli)sqrt(p);
            if(xy*xy==p )
                cout<<2<<'\n';
            else
                cout<<0<<'\n';
        }
        else if(p==0)
        {
            cout<<4<<'\n';
        }
        else
        {
            D= (d*d) + (4*p);
            xy = (lli)sqrt(D);
            ans=0;
            if(D==0)
                if(d%2==0)
                    cout<<2<<'\n';
                else
                    cout<<0<<'\n';
            else if(xy*xy == D)
            {
                //ans = 0;
                if((d+xy)%2==0)
                    ans+=2;
                if((d-xy)%2==0)
                    ans+=2;
                cout<<ans<<'\n';
            }
            else
            {
                cout<<0<<'\n';
            }
        }
    }
    return 0;
}