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
    int n ;
    cin>>n ;
    vector<string> s ;
    for (int i =0 ; i<n ; i++){
        string ss ;
        cin>>ss;
        s.push_back(ss);
    }
    bool busy = false ;
    for (int i = 0 ; i<n ; i++){
            if (s[i][0]=='O'&&s[i][1]=='O'){
                s[i][0]='+';
                s[i][1]='+';
                busy = true ;
                break;
            }
            else if(s[i][3]=='O'&&s[i][4]=='O'){
                s[i][3]='+';
                s[i][4]='+';
                busy = true ;
                break;
            }
    }
    if (busy){
        cout<<"YES\n";
        for (auto it = s.begin();it!=s.end();it++){
            cout<<*it<<"\n";
        }
    }
    else
        cout<<"NO";

}
