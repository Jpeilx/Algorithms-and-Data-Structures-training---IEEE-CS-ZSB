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
    string s ;
    cin>>s ;
    int out = 1 ;
    for (int i = 0 ; i<s.length() ; i++ ){
        if (isupper(s[i]))
            out++;
    }
    cout<<out ;

}
