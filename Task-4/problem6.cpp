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
    transform(s.begin(),s.end(),s.begin(),::tolower);
    bool valid = true ;
    string user, hostname , resource = "" ;
    if (s.find('@')<s.length())
        user= s.substr(0,s.find('@'));
    else
        user = "";
    if (s.find('/')<s.length()) {
        hostname = s.substr(user.size()+1, s.find('/')-user.size()-1);
        resource =s.substr(s.find('/')+1,s.length()) ;
    }
    else
        hostname = s.substr(s.find('@')+1,s.length());

    if (user.length()>16||user.length()==0)
        valid=false;
    else {
        for ( int i = 0  ; i<user.length(); i++){
            if (user[i]=='_'||(user[i]>='0'&&user[i]<='9'))
                continue;
            if (user[i]<'a' || user[i]>'z'){
                valid = false ;
                break;
            }
        }
    }

    if (hostname.length()>32||hostname.length()==0)
        valid=false;
    else {
        for ( int i = 0  ; i<hostname.length(); i++){
            if ((i==hostname.length()-1||i==0) &&hostname[i]=='.'){
                valid= false;
                break;
            }
            if ((hostname[i]=='.'&&hostname[i-1]!='.')||hostname[i]=='_'||(hostname[i]>='0'&&hostname[i]<='9'))
                continue;
            if (hostname[i]<'a' || hostname[i]>'z'){
                valid = false ;
                break;
            }
        }
    }
    if (s[s.length()-1]=='/')
        valid=false ;
    if (resource.length()>16){
        valid=false;
    }
    else {
        for ( int i = 0  ; i<resource.length(); i++){
            if (resource[i]=='_'||(resource[i]>='0'&&resource[i]<='9'))
                continue;
            if (resource[i]<'a' || resource[i]>'z'){
                valid = false ;
                break;
            }
        }
    }

    if (valid)
        cout<<"YES";
    else
        cout<<"NO" ;

}
