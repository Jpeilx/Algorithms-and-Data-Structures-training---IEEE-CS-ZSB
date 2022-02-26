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
    cin >>n ;
    int * arr = new int [n] ;
    for (int i =0 ; i<n ; i++)
        cin>>arr[i];
    cin>>m ;
    for (int i = 0; i<m ; i++){
        int x , y ;
        cin>>x>>y ;
        x-- ;
        if (x==0){
            arr[1]+=arr[0]-y;
            arr[0]=0 ;
        }
        else if (x==n-1){
            arr[n-2]+=(y-1) ;
            arr[n-1]=0 ;
        }
        else{
            arr[x-1]+=(y-1) ;
            arr[x+1]+=arr[x]-y ;
            arr[x]=0;
        }
    }
    for (int i=0 ; i<n ; i++)
        cout<<arr[i]<<"\n";
    delete []arr ;
}
