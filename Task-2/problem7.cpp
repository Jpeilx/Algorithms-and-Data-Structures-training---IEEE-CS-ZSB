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
    int n , a , max = 0 ;
    set<int> s ;
    cin>>n>>a ;
    s.insert(a);
    for (int i = 1 ; i<2*n ; i++){
        if (max<s.size())
            max=s.size();
        cin>>a ;
        if (s.find(a)==s.end())
            s.insert(a);
        else
            s.erase(a);
    }
    cout<<max ;


}
