#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"*************How many sides you have in a polygon***********"<<"\n";
    cin>>n;
    int x_coordinate[n];
    int y_coordinate[n];
    for(int i=0;i<n;i++)
    {
        cin>>x_coordinate[i];
        cin>>y_coordinate[i];
    }
    int i=0;
    int j=0;
    int sum=0;
    while(j<4 && i<4)
    {
         cout<<x_coordinate[i]*y_coordinate[(i+1)%(n-1)]<<"   "<<x_coordinate[(i+1)%(n-1)]*y_coordinate[i]<<"\n";
         sum += ((x_coordinate[i] * y_coordinate[(i+1)%(n)])-(x_coordinate[(i+1)%(n)] * y_coordinate[i]));
         i++;
         j++;
    }

    cout<<"*************Area of the Polygon************"<<"\n";
    cout<<"             "<<sum<<"                "<<"\n";
    return 0;
}