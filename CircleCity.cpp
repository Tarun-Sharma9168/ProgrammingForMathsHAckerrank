#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int d,k;
    long long int count=0;
    while(t--)
    {
        count=0;
         cin>>d>>k;
         for(long int i=0;i<sqrt(d);i++)
         {
             long long int p=(long)sqrt.((long)d-i*i);

             if((p*p+i*i)==d)
             {
                 count+=4;
             }
         }
         if(k>=count)
         {
             cout<<"possible"<<"\n";
         }
         else{
             cout<<"impossible"<<"\n";
         }
    }
    return 0;
}