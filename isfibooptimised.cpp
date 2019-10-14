#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
string solve(long N) {
    // (5*n2 + 4) or (5*n2 – 4) 
    double n= N;
    double  term1= 5LL*n*n +4;
    double  term2= 5LL*n*n -4;
     double t1=((sqrt(term1)));
     double t2=((sqrt(term2)));
     if(t1==floor(t1)) return "IsFibo";
     if(t2==floor(t2)) return "IsFibo";

     else return "IsNotFibo";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string result = solve(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
