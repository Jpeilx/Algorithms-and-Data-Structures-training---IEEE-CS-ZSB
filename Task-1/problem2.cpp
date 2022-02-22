#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
int main() {
 
   cin.tie(0);
    ios::sync_with_stdio(0);
    double n ;
    cin>>n ;
    cout<<fixed<<setprecision(1)<<n/log(n)<<" "<<fixed<<setprecision(1)<<1.25506*(n/log(n))<<"\n";

 
    return 0;
}
