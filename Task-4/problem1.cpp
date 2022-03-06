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
    string s ;
    cin>>s ;


    int right= s.find('+') ;
    int left=s.find('=')-(right+1);
    int sum =s.length()-(right+left+2);
    if (right+left==sum)
        cout<<s ;
    else if (sum-(right+left)==2 ){
        s.erase(s.end()-1);
        cout<<"|"<<s;
    }
    else if ((right+left)-sum==2){
        if (right>1)
          s.erase(s.begin());
        else
          s.erase(s.begin()+right+1);
        cout<<s<<'|';
    }
    else
        cout<<"Impossible";



}
