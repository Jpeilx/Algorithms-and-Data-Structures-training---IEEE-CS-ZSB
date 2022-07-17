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
long long  greatestCommonDivisor (int a , int b  ){
    if (b==0)
        return  a ;
    return greatestCommonDivisor(b,a%b);

}
int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int a , b ;
    cin>>a>>b ;
    cout<<greatestCommonDivisor(a, b);
}
