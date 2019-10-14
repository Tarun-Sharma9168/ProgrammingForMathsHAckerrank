//Nice Problem in terms of multiple of any number which have the multiple in terms of one or more
//9's and zero or  more 0's and it depends on converting the number into binary.
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
    //some preprocessing before the questions begins
    unsigned long long int t,x,j,binary[10001]={0};
    for(int i=1;i<10000;++i)
    {
        j=i;
        x=1;
        while(j)
        {
            binary[i]=binary[i]+(j%2)*x;
            j/=2;
            x*=10;
        }
    }
    cin>>t;
    while(t--)
    {
       int N;
       cin>>N;
       int prev;
       for(int i=1;;i++)
       {
           if((binary[i] * 9) % N == 0)
           {
               prev=i;
               break;
           }
       }  
       cout<<( (binary[prev])*9 )<<"\n";
    }
    return 0;
}