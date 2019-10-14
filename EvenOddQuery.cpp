#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin>>N;

    int arr[N+1]={0};
    for(int i=1;i<=N;i++)
    {
       cin>>arr[i];
    }

    int Q;
    cin>>Q;
    int b,c;
    while(Q--)
    {
       cin>>b>>c;

         if(b!=c && arr[b+1]==0 && b+1<=c)
                cout<<"Odd"<<endl;
            else
                {
                    if(arr[b]%2==0)
                        cout<<"Even"<<endl;
                    else
                        cout<<"Odd"<<endl;
                }        
    }
    return 0;
}