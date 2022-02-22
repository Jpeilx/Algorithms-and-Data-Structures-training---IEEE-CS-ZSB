#include <iostream>
 
using namespace std;
 
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n ;
    cin>>n ;
    for (int i = 1 ; i<=10 ; i++)
        cout<<i<<" x "<<n<<" = "<<i*n<<"\n";
    return 0;
}
