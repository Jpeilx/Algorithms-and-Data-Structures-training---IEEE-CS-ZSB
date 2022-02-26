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
    int arr [5][5] ;
    int x , y , output = 0 ;
    for (int i = 0 ; i <5 ; i++)
        for (int j =0 ; j<5 ; j++){
            cin>>arr[i][j];
            if (arr[i][j]==1){
                x=i;
                y=j ;
            }
        }
    output=abs(2-x) ;
    output+=abs(2-y);
    cout<<output ;

}
