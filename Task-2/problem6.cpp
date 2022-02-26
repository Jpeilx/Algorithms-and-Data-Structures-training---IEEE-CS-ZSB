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
    int n, x ,  max =0 , min =0 , output = 0  ;
    cin>>n>>x ;
    min = x ;
    max = x ;
    for (int i = 0 ; i<n-1 ; i++){
        cin>>x ;
        if (x>max){
            output++ ;
            max = x ;
        }
        if (x<min){
            output++ ;
            min = x ;
        }

    }
    cout << output ;


}
