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
    int n , anton = 0 , danik = 0 ;
    string s ;
    cin>>n>>s;
    for (int i = 0 ; i<n ; i++){
        if (s[i]=='A')
            anton++ ;
        else
            danik++;
    }
    if (anton>danik)
        cout<<"Anton";
    else if (anton<danik)
        cout<<"Danik";
    else
        cout<<"Friendship";
}
