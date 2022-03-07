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

#include <map>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n , p , k ;
    cin>>n>>p>>k;
    set <int> s ;
    s.insert(p);
    for (int i = 0 ;p-k+i<p;i++) {
        if (p - k + i >= 1)
            s.insert(p - k + i);
    }

    for (int i = 1 ; p+i<=p+k;i++){
    if (p+i<=n)
        s.insert(p+i);
    }

    for (auto it =s.begin(); it!=s.end();it++){
        if (it == s.begin() && *it!=1)
            cout<<"<< ";
        if (*it == p )
            cout<<'('<<p<<") ";
        else
            cout << *it << " ";
        if(it == --s.end() && *it!=n )
            cout<<">>";
    }

}
