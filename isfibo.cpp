//Problematic solution 
//But it is correct so donot afraid we have a quick solution
#include<iostream>
#include<algorithm>
using namespace std;
//#define MAX 100001
int main()
{
    int test;
    cin>>test;
    long long int number;
    //preprocessin for the easily checking if it is fibonacci number or not
    long long int fib[51];
    fib[0]=0;
    fib[1]=1;

    for(int i=2;i<52;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    while(test--)
    {
      cin>>number;
      if(binary_search(fib,fib+51,number))
      {
          cout<<"IsFibo"<<"\n";
      }  
      else
      {
          cout<<"IsNotFibo"<<"\n";
      }
    } 
    return 0;
}