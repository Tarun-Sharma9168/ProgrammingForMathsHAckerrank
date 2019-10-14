#include "iostream"
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3,y1,y2,y3,z1,z2,z3,x4,z4,y4;
        cin>>x1>>y1>>z1>>x2>>y2>>z2>>x3>>y3>>z3>>x4>>y4>>z4;
        int lol=(x3-x1)*((y3-y1)*(z4-z1)-(z3-z1)*(y4-y1))+(y1-y2)*((x3-x1)*(z4-z1)-(z3-z1)*(x4-x1))+(z1-z2)*((x3-x1)*(y4-y1)-(x4-x1)*(y3-y1));
        if(lol==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
