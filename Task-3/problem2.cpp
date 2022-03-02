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
    int n , counter = 0   ;
    string  s ;
    cin>>n>>s  ;
    vector<int> blocks ;
    for (int i = 0 ; i<n ; i++){
        if (s[i]=='B')
            counter++ ;
        else if (i!=0&&s[i]=='W'&&s[i-1]=='B'){
            blocks.push_back(counter);
            counter = 0 ;
        }
        if (i==n-1&&counter!=0)
            blocks.push_back(counter);

    }
    cout<<blocks.size()<<"\n";
    for (auto it = blocks.begin();it!=blocks.end();it++)
        cout<<*it<<" ";


}
