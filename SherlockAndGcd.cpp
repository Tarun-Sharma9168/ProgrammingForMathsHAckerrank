//It is based on the concept that first how to compute the gcd for the whole array
//Second if the gcd of whole array is 1 means there must exist atleast one subset which follow
//this property.Otherwise if not then there is no such subset
#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b)
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
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int result=arr[0];
        for(int i=1;i<n;i++)
         {
           result=gcd(result,arr[i]);
         }
        if(result == 1)
        {  
           cout<<"YES"<<"\n";
        }
     else
     {
         cout<<"NO"<<"\n";
     }
   }
return 0;
}