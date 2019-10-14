#include<iostream>
using namespace std;
void printOtherSides(int n)
{
   if( n & 1)
   {
       if(n == 1)
       {
           cout<<-1<<"\n";
       }
       else{

           int b=(n*n-1)/2;
           int c=(n*n+1)/2;
           cout<<n<<" "<<b<<" "<<c<<"\n";
       }
   }
   else{

       if(n==2)
       {
           cout<<-1<<"\n";
       }
       else{

           int b=n*n/4-1;
           int c=n*n/4+1;
           cout<<n<<" "<<b<<" "<<c<<"\n";
       }
   }
}
int main()
{
    int a;//catethus single length that is given
    cin>>a;
    printOtherSides(a);
    return 0;
}