#include<iostream>
using namespoace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
string solve_linear_combination_problem(int a,int b ,int c)
{
if(c <= max(a,b) && c%gcd(a,b)==0)
{
    return "YES";
}
else{
    return "NO";
}
}
int main()
{
    int t;
    cin>>t;
    int a,b,c;
    while(t--)
    {  
       cin>>a>>b>>c;
       cout<<solve_linear_combination_problem(a,b,c)<<"\n";
    }
    return 0;
}