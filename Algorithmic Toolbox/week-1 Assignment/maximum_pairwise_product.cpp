                                 //  In the name of of Allah  //
                      //O Allah, peace and blessings upon the Prophet Muhammad//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);
    int n ,x;
    long long result ;
    vector <int> vv ;
    cin>>n ;
    for (int i = 0 ;i<n ; i++){
        cin>>x ;
        vv.push_back(x);
    }
    sort(vv.begin(),vv.end());
    result=vv[vv.size()-1]*vv[vv.size()-2];
    cout<<result;
}
