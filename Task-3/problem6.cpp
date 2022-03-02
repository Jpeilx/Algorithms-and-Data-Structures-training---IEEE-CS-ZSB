//  In the name of of Allah  //
//O Allah, peace and blessings upon the Prophet Muhammad//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <string>
#include <iterator>
#include <cmath>
#include <iomanip>
#include <set>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n ;
    cin>>n;
    int t = n , out = n ;
    for (int i = 0 ; i<ceil(n/2);i++){
        t-=2;
        out+=t*2 ;
    }
    cout<<out<<"\n";
    for (int i=0 ; i<n ; i++){
        for (int j = 0 ;j<n ; j++){
            if ((i%2==0 && j%2==0)||(i%2==1 && j%2==1))
                cout<<'C';
            else if ((i%2==1&&j%2==0)||(i%2==0&&j%2==1))
                cout<<'.';
        }
        cout<<"\n";
    }

}
