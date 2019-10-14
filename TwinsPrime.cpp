//Not absolutely correct
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int number){
    if(number < 2)
        return false;
    if(number == 2)
        return true;
    if(number % 2 == 0)
        return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 )
            return false;
    }
    return true;
}

int main()
{
    int n,m,counter=0;
    cin>>n>>m;
    if(n<=3 && m>=5)
        counter++;
    for(int i=n; i<=m; i++)
    {
        if(i%6==0)
        {
            if(isPrime(i-1) && isPrime(i+1))
                counter++;
        }
    }
    cout<<counter<<endl;
    return 0;
}