#include<iostream>
#include<complex>
#define X real()
#define Y imag()
using namespace std;
typedef long long C;
typedef complex<C> P;
int main()
{
    P p={4,2};

    cout<<p.X<<" "<<p.Y<<"\n";

    P v={3,1};
    P u={2,2};

    P s=v+u;

    cout<<s.X<<" "<<s.Y<<"\n";


    cout<<"Absolute value "<<abs(v)<<"\n";

    cout<<"Absolute value "<<abs(u)<<"\n";

    //To find the distance between two points a and b
    cout<<abs(v-u)<<"\n";


    //arg(v) calculate the angle of vector v=(y,x)
      complex<double> n(4.0,2.0);
    //the function polar(s,a) constructs the vector a whose length is s and that points to an angle a

    //A vector ca n be rotated by an angle a by multiplying it by vector of length 1 and angle a

    //The following code rotates the vector (4,2) ,rotates it 1/2 radian counterclockwise ,an then
    //calculates the angle again



   
    cout<<"Original angle is  ";
    cout<<arg(n)<<"\n";

    n*=polar(1.0,0.5);
    cout<<"the angle after rotation is";
    cout<<arg(n)<<"\n";
  

  
    return 0;
}