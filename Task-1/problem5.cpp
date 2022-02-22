#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    cin.tie(0);
    ios::sync_with_stdio(0);
    double t , n ;
    cin>>t>>n  ;
    cout<<fixed<<setprecision(3)<<(t*n)/12<<"\n" ;
 
    return 0;
}
