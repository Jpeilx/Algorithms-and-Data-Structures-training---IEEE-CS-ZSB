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
    int n , k ,x ;
    cin>>n>>k  ;
    vector <int> vv ;
    for (int i = 0 ; i<n ; i++){
        cin>>x ;
        vv.push_back(x);
    }
    int beg = 0 ;
    int fin = n-1 ;
    int counter = 0 ;
    while (vv[beg]<=k || vv[fin]<=k){
        if ( vv[beg]<=k) {
            vv.erase(vv.begin()+beg);
        }
        else if(vv[fin]<=k)  {
            vv.erase(vv.begin()+fin);
        }
        fin--  ;
        counter++ ;
        if (counter==n)
            break;
    }
    cout<<counter ;



}
