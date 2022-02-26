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
using namespace std ;
#define ll  long long
#define v  vector<int>
#define l list<int>
#define all(x) x.begin(), x.end()
#define xx(i,a,n) for (int i = a ; i<n ; i++)
int main () {
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n , output=1 ;
    cin>>n ;
    vector<int> vv ;
    for (int i = 0 ; i<n ; i++){
        int x ;
        cin>>x ;
        vv.push_back(x);
    }
    sort(vv.begin(),vv.end()) ;
    if(vv[0]==0)
        output=0 ;
    for (int i = 1 ; i<n ; i++){
       if (vv[i]!=vv[i-1] && vv[i]!=0)
           output++ ;
    }
    cout<<output ;
}
