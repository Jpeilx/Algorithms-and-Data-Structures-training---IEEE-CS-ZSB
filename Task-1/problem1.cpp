#include <iostream>
 
using namespace std;
 
int main() {
 
     cin.tie(0);
    ios::sync_with_stdio(0);
    short int d ;
    cin>>d ;
    if (d<=800)
        cout<<1<<"\n";
    else if (d<=1400)
        cout<<2<<"\n" ;
    else
        cout<<3<<"\n"  ;

    return 0;
}
