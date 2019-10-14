#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    long long int min_for_a=1e9;
    long long int min_for_b=1e9;
    while(n--)
    {
      cin>>a>>b;    
      if( a < min_for_a)
      {
          min_for_a=a;
      }
      if(b < min_for_b)
      {
          min_for_b=b;
      }
    }
    long long int result=min_for_a*min_for_b;
    cout<<result<<"\n";
    return 0;
}