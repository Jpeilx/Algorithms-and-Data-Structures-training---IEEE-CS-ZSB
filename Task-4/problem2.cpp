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
    string  s , t;
    cin>>s>>t ;
    int len = s.length()-1 ;
    if (s[len] !='z')
        s[len]++;
    else{
        while(s[len] =='z'){
            s[len]='a';
            len--;
        }
        s[len]++;
    }
    if (s==t)
        cout<<"No such string";
    else
        cout<<s;


}
