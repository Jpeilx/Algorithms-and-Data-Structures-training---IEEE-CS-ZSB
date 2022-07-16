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
#include <numeric>
using namespace std ;
long long  last_digit_fib (int n ){
    vector <long long > fibnum  ;
    fibnum.push_back(0) ;
    fibnum.push_back(1);
    for (int i = 2 ; i<=n ; i++){
        fibnum.push_back(fibnum[i-2]+fibnum[i-1]);
    }
    return fibnum[n]%10;
}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n ;
    cin>>n ;
    cout<< last_digit_fib(n);

}
