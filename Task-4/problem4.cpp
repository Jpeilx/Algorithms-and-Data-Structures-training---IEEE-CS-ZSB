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
    map<string,int>ma ;
    int m , n ;
    double k ;
    cin>>n>>m>>k ;
    string s ;
    int t ;
    for (int i = 0 ; i<n ; i++){
        cin>>s>>t ;
        if (t*k<100)
            continue;
        else
          ma.insert({s,t*k+1e-9});
    }
    for (int i = 0 ;i<m ; i++){
        cin>>s ;
        ma.insert({s,0});
    }
    cout<<ma.size()<<"\n";
    for (auto it =ma.begin(); it!=ma.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
}
