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
    int n , sereja=0 ,dima=0 ;
    cin>>n ;
    vector<int> vv ;
    for (int i = 0 ; i<n ; i++){
        int x ;
        cin>>x ;
        vv.push_back(x);
    }
    int beg = 0 ;
    int fin = n-1 ;
    for (int i = 0 ; i<n ; i++){
        if (i%2==0){
            sereja+=max(vv[beg],vv[fin]);
            if (vv[beg]>vv[fin])
                beg++;
            else
                fin-- ;
        }
        else{
            dima+=max(vv[beg],vv[fin]);
            if (vv[beg]>vv[fin])
                beg++;
            else
                fin-- ;

        }
    }


    cout<<sereja<<' '<<dima  ;
}
