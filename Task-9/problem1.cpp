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
    int n , x  ;
    cin>>n ;
    vector <int> insertion  ;
    for (int i = 0 ; i< n ; i++){
        cin>>x ;
        insertion.push_back(x);
    }
    while (n>=2 && x<insertion[n-2] ){
        insertion[n-1]=insertion[n-2];
        n-- ;
        for (int i = 0 ; i<insertion.size() ; i++)
            cout<<insertion[i]<<" ";
        cout<<"\n";
    }
    insertion[n-1]=x ;
    for (int i = 0 ; i<insertion.size() ; i++)
        cout<<insertion[i]<<" ";
    cout<<"\n";


}
