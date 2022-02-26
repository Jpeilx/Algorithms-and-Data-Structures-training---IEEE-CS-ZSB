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
    int n , m ;
    cin>>n>>m;
    char arr [n][m];
    bool blackAwhite = true ;
    for (int i = 0 ; i<n ; i++)
        for (int j = 0 ; j<m ; j++){
            cin>>arr[i][j];
            if (arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y' )
                blackAwhite =false ;
        }
    if (blackAwhite)
        cout<<"#Black&White";
    else
        cout<<"#Color";

}
