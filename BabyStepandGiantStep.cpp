#include<iostream>
using namespace std;
int minjumps_geometry(int a,int b,int d)
{
      int temp=a;
      a=min(a,b);
      b=max(a,b);


      if(d>=b)
      {
          return (d+b+1)/b;
      }
      if(d==0)
      {
          return 0;
      }

      if(d==a)
      {
          return 1;
      }
      return 2;
}
int main()
{
    int q;
    cin>>q;
    int a,b,d;
    while(q--)
    {
       cin>>a>>b>>d;
       cout<<minjumps_geometry(a,b,d)<<"\n";
    }
    return 0;
}