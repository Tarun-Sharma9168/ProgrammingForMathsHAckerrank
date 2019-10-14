#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int a,b;
 cin>>a>>b;
 int preva,prevb;
 preva=a;
 prevb=b;
 bool flag=true;
 for(int i=0;i<n-1;i++)
 {
     cin>>a>>b;
     if(preva==a || prevb ==b)
     {}
     else{
         flag=false;
         break;
     }
 }
 if(flag){
     cout<<"YES"<<"\n";
 }
 else{
     cout<<"NO"<<"\n";
 }
 return 0;
}