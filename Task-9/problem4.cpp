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
#include <numeric>
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);
    string  s ;
    int n ;
    cin>>s>>n ;
    vector<int> col ;
    for (int i = 0 ; i<s.length(); i++){
        if (i==0)
            col.push_back((int)s[i]-96) ;
        else {
            if (s[i-1]==s[i])
                col.push_back((int)s[i]-96+*col.rbegin());
            else
                col.push_back((int)s[i]-96) ;
        }
    }
    int x ;
    while (n--){
        cin>>x ;
        if (find(col.begin(),col.end(),x)!=col.end())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

}
